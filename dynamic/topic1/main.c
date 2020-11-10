#include<stdio.h>
#include<string.h>
#include<limits.h>

#define			COIN1		1
#define			COIN5		5
#define			COIN10		10

#define	min(x, y)  x < y ? x : y  


int coins(int nTotalConis)
{
	int dp[nTotalConis + 1];
	//memset(dp, 0, nTotalConis + 1);

	if(nTotalConis <= 0)
	{
		return -1;
	}

	dp[0] = 0;
		
	for(int i = 1; i <= nTotalConis; i++)
	{
		int cost = INT_MAX;
		if(i >= COIN1)
		{
			cost = min(cost, dp[i - COIN1] + 1);
		}
		
		if(i >= COIN5)
		{
			cost = min(cost, dp[i - COIN5] + 1);
		}

		if(i >= COIN10)
		{
			cost = min(cost, dp[i - COIN10] + 1);
		}
		
		dp[i] = cost;
	}
		
	return dp[nTotalConis];
}

int main()
{
	int nMinCnt = 0;
	int nTotalConis = 15;	
	
	nMinCnt = coins(nTotalConis);

	printf("total coins is %d,cost min conis is %d\n",nTotalConis, nMinCnt);

	return 0;
}
