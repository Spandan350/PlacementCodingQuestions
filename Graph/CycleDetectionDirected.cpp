bool CheckCycle(int i,vector<int>&visit,vector<int>&dfsvisit,vector<int> adj[])
{
	visit[i]=dfsvisit[i]=1;
	bool res=false;
	for(int j:adj[i])
	{
		if(visit[j]&&dfsvisit[j])
		{
			return true;
		}
		else if(!visit[j])
		{
			if(CheckCycle(j,visit,dfsvisit,adj))return true;
		}
	}
	dfsvisit[i]=0;
	return false;
}
bool isCyclic(int V, vector<int> adj[]) {
	// code here
	vector<int> visit(V,0);
	vector<int> dfsvisit(V,0);
	
	for(int i=0;i<V;i++)
	{
		if(!visit[i])
		{
			if(CheckCycle(i,visit,dfsvisit,adj))return true;
		}
	}
	return false;
}