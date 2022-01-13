vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
	// Code here
	vector<int> visit(V,-1);
	visit[S]=0;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	pq.push({0,S});
	vector<int> ans;
	ans.push_back(1);
	while(!pq.empty())
	{
		//cout<<pq.top().first<<" "<<pq.top().second<<endl;
		pair<int,int> temp=pq.top();//weight, node num
		for(auto i:adj[temp.second])
		{
			int v=i[0];
			int w=i[1];
			
			if(visit[v]==-1||visit[v]>temp.first+w)
			{
				visit[v]=temp.first+w;
				pq.push({temp.first+w,v});
			}
		}
		pq.pop();
	}
	return visit;
}