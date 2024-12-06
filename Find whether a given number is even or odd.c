//C program that find whether a given number is even or odd.
#include <stdio.h>
int main()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	if(num%2 == 0)
	{
		printf("The given number is EVEN");
	}
	else
	{
		printf("The given number is ODD");
	}
	return 0;
}
