#include<stdio.h>


void GetHundredChickens(int buf[][3], int *nNum, int nLen)
{
	int nCnt = 0;
	int nTotalMoney = 100;
	int nCockPrice = 5;
	int nHenPrice = 3;
	int n3ChickPrice = 1;

	for(int i = 0; i <= 20; i++)
	{
		for(int j = 0; j < 34; j++)
		{
			for(int h = 0; h <= 100; h++)
			{
				if(i*nCockPrice + j*nHenPrice + h*n3ChickPrice == nTotalMoney)
				{
					if(nCnt < nLen)
					{
						buf[nCnt][0] = i;
						buf[nCnt][1] = j;
						buf[nCnt][2] = h*3;
						nCnt++;
						
						*nNum = nCnt;
					}
				}
			}
		}
	}	
}


int main()
{
	int nCnt = 0;
	int buf[500][3];

	GetHundredChickens(buf, &nCnt, 500);
	
	printf("total method is %d\n", nCnt);
	for(int i = 0; i < nCnt; i++)
	{
		printf("cock is %d,hen is %d,chick is %d\n",buf[i][0], buf[i][1], buf[i][2]);
	}
	
	return 0;
}
