#include <stdio.h>
long int factorial(x)
{
	long int fert=1;
	for(int i=1;i<=x;i++)
		{
			fert *= i;
		}
	return fert;
}
