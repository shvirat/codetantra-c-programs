//C Program to find the sum of the digits of the entered number
#include <stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter a Number: ");
	scanf("%d",&n);
	while(n>0)
		{sum += n%10;
		n /= 10;
		}
	printf("Sum of Digits of Number:  %d",sum);
	return 0;
}
