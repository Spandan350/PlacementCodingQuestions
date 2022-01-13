bool BFS(int i,vector<bool> &visit,vector<int> adj[])
{
	queue<pair<int,int>>q;
	q.push({i,-1});
	visit[i]=true;
	while(!q.empty())
	{
		int node=q.front().first;
		int par=q.front().second;
		for(int j:adj[node])
		{
			if(!visit[j])
			{
				q.push({j,node});
				visit[j]=true;
			}
			else
			{
				if(par!=j)
				{
					return true;
				}
			}
		}
		q.pop();
	}
	return false;
}
bool isCycle(int V, vector<int> adj[]) {
	// Code here
	vector<bool> visit(V,0);
	
	for(int i=0;i<V;i++)
	{
		if(!visit[i])
		{
			if(BFS(i,visit,adj))return true;
		}
	}
	return false;
}