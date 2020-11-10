#include<stdio.h>
#include<limits.h>

#define		max(x, y) 		x>y?x:y

int jump(int *arr, int len)
{
	int nStep = 0;
	int nMaxpos = 0;
	int nBorder = 0;	

	for(int i = 0; i < len; i++)
	{
		if(i > nBorder)
		{
			nBorder = nMaxpos;
			++nStep;
		}

		nMaxpos = max(nMaxpos, i + arr[i]);		
	}	

	return nStep;
}

int main()
{
	int arr[] = {2, 1, 3, 1, 4, 1, 1, 2, 3, 2, 5};
	int nMinStep = 0;	
		
	nMinStep = jump(arr, sizeof(arr)/sizeof(int));

	printf("cost min step is %d\n", nMinStep);

	return 0;
}
