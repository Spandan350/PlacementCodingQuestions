int maxIndexDiff(int arr[], int N) 
{ 
	// Your code here
	int i=0,j=N-1;
	int max=0;
	while(i<=j)
	{
		if(i==j)
		{
			i++;
			j=N-1;
		}
		if(arr[i]<=arr[j])
		{
			if(max<(j-i))
			{
				max=j-i;
			}
			i++;
			j=N-1;
		}
		else
		{
			j--;
		}
	}
	return max;
}