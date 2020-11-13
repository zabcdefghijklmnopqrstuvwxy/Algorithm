#include<stdio.h>
#include<math.h>

int mysqrt(int n)
{
	double	xi = n;
	double  c = n;
	double  x0 = n;

	do
	{
		x0 = (xi*xi + c)/(2*xi);

		if(xi - x0 < exp(-7))
		{
			break;
		}

		xi = x0;
	}while(1);
	
	return (int)round(x0);
}

int main()
{
	int n = 14;
	int res = 0;

	res = mysqrt(n);

	printf("sqrt result is %d\n",res);
	
	return 0;
}
