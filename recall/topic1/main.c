#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define			N			8
static unsigned int unCnt = 0;

bool IsValid(char queen[][N], int row, int col)
{
	int i = 0;
	int j = 0;

	for(i = 0; i < row; i++)
	{
		if(queen[i][col] == 'Q')
		{
			return false;
		}
	}
 	
	for(i = row - 1, j = col + 1; i >= 0 && j < N; i--,j++)
	{ 
    	if(queen[i][j] == 'Q')
		{
        	return false;
        }
    }

    for(i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
	{
    	if(queen[i][j] == 'Q')
		{
        	return false;
        }
    }

	return true;
}

void backtrack(char queen[][N], int row)
{
	if(row >= N)
	{
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N; j++)
			{
				printf("%c\t",queen[i][j]);
			}
			printf("\n");
		}
		
		printf("\n");
		unCnt++;
		return ;
	}

	for(int col = 0; col < N; col++)	
	{
		if(IsValid(queen, row, col))
		{
			queen[row][col] = 'Q';
			backtrack(queen, row + 1);
			queen[row][col] = '*';
		}
	}
}

void NQueen(void)
{
	int i = 0, j = 0;
	char queen[N][N];;
		
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			queen[i][j] = '*';
		}
	}	
		
	backtrack(queen, 0);
}

int main()
{
	NQueen();

	printf("total queen num is %d\n",unCnt);
	return 0;
}

