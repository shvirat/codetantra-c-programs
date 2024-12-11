//C program to print sum of even and odd numbers from 1 to N numbers
#include <stdio.h>
int main()
{
//Initiating variable 'n' for input
//Initiating two variables for sum of even and odd numbers
	int n,esum=0,osum=0;
	printf("Enter the value of num\n");
	scanf("%d",&n);
//Under for-loop if condition checking the number is even or not
	for(int i=0;i<=n;i++)
		{
			if(i%2==0)
			{esum += i;}
			else
			{osum += i;}
		}
//Printing output as per user requirements
	printf("Sum of all odd numbers  = %d\n",osum);
	printf("Sum of all even numbers = %d\n", esum);
	return 0;
}
