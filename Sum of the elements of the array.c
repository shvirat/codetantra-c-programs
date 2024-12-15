//C Program that simply takes elements of the array from the user and finds the sum of these elements
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter array size\n");
	scanf("%d",&n);
//Array decleration and input
	int array[n];
	printf("Enter array elements\n");
	for(i=1;i<=n;i++)
		{scanf("%d",&array[i]);}
//This loop adding each element & storing is 'sum'
	for(i=1;i<=n;i++)
		{sum = sum + array[i];}
	printf("Sum of the array = %d\n",sum);
	return 0;
}
