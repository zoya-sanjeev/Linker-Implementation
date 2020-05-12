#include<stdio.h>
#include"algo.h"
int main()
{
	int n, arr[20],i,result;
	printf("Enter the sze of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of array\n");
	for(i=0; i<n;i++)
		scanf("%d",&arr[i]);
	result=kadanes(arr,n);
	printf("Maximum sum of the subarray = %d",result);
	return 0;

}
