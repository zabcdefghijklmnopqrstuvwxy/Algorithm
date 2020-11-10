#include<stdio.h>

void hanoi(int plice, char a, char b, char c)
{
	if(1 == plice)
	{
		printf("move %d from %c to %c\n", plice, a, b);
	}
	else
	{
		hanoi(plice-1, a, c, b);
		printf("move %d from %c to %c\n", plice, a, b);
		hanoi(plice-1, c, a, b);
	}
}

int main()
{
	int plice = 3;
	char a = 'A';
	char b = 'B';
	char c = 'C';
	
	hanoi(plice, a, b, c);
	
	return 0;
}
