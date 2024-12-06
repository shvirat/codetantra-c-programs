//Program that checks whether the two numbers entered by the user are equal or not
#include <stdio.h>
int main()
{
	int n1,n2;
	printf("Enter two numbers= ");
	scanf("%d%d",&n1,&n2);
//Condition for checking equality
	if(n1 == n2)
	{
		printf("Both the numbers are equal");
	}
	else
	{
		printf("Both the numbers are not equal");
	}
	return 0;
}
