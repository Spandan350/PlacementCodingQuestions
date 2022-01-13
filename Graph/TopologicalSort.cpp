void visitNode(int i,vector<int>&visit,stack<int>&st,vector<int> adj[])
{
	visit[i]=1;
	for(int j: adj[i])
	{
		if(!visit[j])
		{
			visitNode(j,visit,st,adj);
		}
	}
	st.push(i);
}
vector<int> topoSort(int V, vector<int> adj[]) 
{
	// code here
	vector<int> visit(V,0);
	vector<int> ans;
	stack<int> st;
	for(int i=0;i<V;i++)
	{
		if(!visit[i])
		{
			visitNode(i,visit,st,adj);
		}
	}
	while(!st.empty())
	{
		ans.push_back(st.top());
		st.pop();
	}
	return ans;
}