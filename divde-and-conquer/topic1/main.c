#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define		MAX_BUF_SIZE		128


void merge(int *arr, int start, int mid, int end)
{
	int nLeftLow = start;
	int nLeftHigh = mid;
	int nRightLow = mid + 1;
	int nRightHigh = end;

	int k = 0;
	int *res = (int*)malloc((end - start + 1)*sizeof(int)); 
		
	memset(res, 0, (end - start + 1));
	
	while(nLeftLow <= nLeftHigh && nRightLow <= nRightHigh)
	{
		res[k++] = arr[nLeftLow] < arr[nRightLow] ? arr[nLeftLow++] : arr[nRightLow++]; 				
	}	

	while(nLeftLow <= nLeftHigh)
	{
		res[k++] = arr[nLeftLow++];
	}
								
	while(nRightLow <= nRightHigh)
	{
		res[k++] = arr[nRightLow++];
	}			

	
	for(int i = 0; i < end - start + 1; i++)
	{
		arr[start + i] = res[i];
	}
	
	free(res);
}

void mergesort(int *arr, int start, int end)
{
	if(start >= end)
	{
		return ;
	}

	int mid = (start + end) /2;
	mergesort(arr, start, mid);	
	mergesort(arr, mid + 1, end);

	merge(arr, start, mid, end);	
}

int main()
{
	int arr[] = {3, 7, 8, 1, 5, 9, 13, 2};
	int i = 0;
	
	printf("sort before ");	
	for(i = 0; i < sizeof(arr)/sizeof(int); i++)
	{	
		printf("%d ",arr[i]);
	}	

	mergesort(arr, 0, sizeof(arr)/sizeof(int) - 1);
	printf("\nsort after ");	

	for(i = 0; i < sizeof(arr)/sizeof(int); i++)
	{	
		printf("%d ",arr[i]);
	}	

	printf("\n");
	
	return 0;
}

