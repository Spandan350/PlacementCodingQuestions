int majorityElement(int a[], int size)
{
	
	// your code here
	if(size==1)return a[0];
	map<int,int> mp;
	for(int i=0;i<size;i++)
	{
		if(mp.find(a[i])==mp.end())
		{
			mp.insert({a[i],1});
		}
		else
		{
			mp[a[i]]++;
			if(mp[a[i]]>size/2)return a[i];
		}
	}
	return -1; 
	
}