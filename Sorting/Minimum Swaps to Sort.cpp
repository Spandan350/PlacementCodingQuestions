int minSwaps(vector<int>&nums)
{
	// Code here
	vector<pair<int,int>> vec;
	int count=0;
	for(int i=0;i<nums.size();i++)vec.push_back({nums[i],i});
	sort(vec.begin(),vec.end());
	for(int i=0;i<vec.size();i++)
	{
		while(i!=vec[i].second)
		{
			pair<int,int> temp=vec[i];
			vec[i]=vec[vec[i].second];
			vec[temp.second]=temp;
			count++;
		}
	}
	return count;
}