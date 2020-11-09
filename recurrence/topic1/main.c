#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int GetRabbitNum(int month)
{
	if(month <= 1)
	{
		return 1;
	}

	int *nBuf = (int*)malloc((month + 1)*sizeof(int));
	memset(nBuf, 0, month + 1);
	
	nBuf[0] = 1;
	nBuf[1] = 1;
	
	for(int i = 2; i <= month; i++)
	{
		nBuf[i] = nBuf[i - 1] + nBuf[i - 2];
	}	

	return nBuf[month];
}


int main()
{
	int nCnt = 0;
	int nMonth = 12;

	nCnt = GetRabbitNum(nMonth);

	printf("%d month rabbit num is %d\n",nMonth, nCnt);

	return 0;
}
