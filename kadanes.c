
int kadanes(int arr[], int n)
{	
	int i;
	int max_so_far=0;
	int max_ending=0;
	for( i=0;i<n;i++)
	{
		max_ending+=arr[i];
		if(max_ending<0)
		{
			max_ending=0;
		}
		if(max_so_far<max_ending)
			max_so_far=max_ending;

	}
	return max_so_far;
}
