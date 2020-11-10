#include<stdio.h>
#include<limits.h>

#define			PC_PRICE			5
#define			CAMERA_PRICE		3
#define			XBOX_PRICE			1

#define			PC_CAPACITY			4
#define			CAMERA_CAPACITY		2
#define			XBOX_CAPACITY		1

#define			max(x, y)			x>y?x:y


int knapsack(int amount)
{
	int dp[amount + 1];

	dp[0] = 0;

	for(int i = 1; i <= amount; i++)
	{
		int cost = INT_MIN;
		if(i >= XBOX_CAPACITY)
		{
			cost = max(cost, dp[i - XBOX_CAPACITY] + XBOX_PRICE);
		}
		
		if(i >= CAMERA_CAPACITY)
		{
			cost = max(cost, dp[i - CAMERA_CAPACITY] + CAMERA_PRICE);
		}

		if(i >= PC_CAPACITY)
		{
			cost = max(cost, dp[i - PC_CAPACITY] + PC_PRICE);
		}

		dp[i] = cost;
	}

	return dp[amount];
}

int main()
{
	int nMaxprice = 0;
	int nAmount = 11;	
	
	nMaxprice = knapsack(nAmount);

	printf("max price is %d\n",nMaxprice);

	return 0;
}
