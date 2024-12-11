//C program that print the sum of all numbers up to a given number
#include <stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter ur number\n");
	scanf("%d",&n);
//Simple 'for' loop and logic
	for(int i=0;i<=n;i++)
		{sum += i;}
	printf("Sum of the all numbers up to given no. is %d",sum);
	return 0;
}
