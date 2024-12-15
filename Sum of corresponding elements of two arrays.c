// C Program that inputs two arrays and saves the sum of corresponding elements of these arrays in a third array and prints them
#include <stdio.h>
int main()
{
// Initialising three arrays
	int ar1[10],ar2[10],sum[10];
// Taking input for first array
	printf("Enter first array:-\n");
	for(int i=0;i<10;i++)
		{
			printf("ar1[%d]=",i);
			scanf("%d",&ar1[i+1]);
		}
// Taking input for second array
	printf("Enter second array:-\n");
	for(int i=0;i<10;i++)
		{
			printf("ar2[%d]=",i);
			scanf("%d",&ar2[i+1]);
		}
// Printing Sum array after calculating by 'for' loop
	printf("Sum of arrays:-\n");
	for(int i=0;i<10;i++)
			{
				sum[i] = ar1[i+1]+ar2[i+1];
				printf("sum[%d]=%d\n",i,sum[i]);
			}
	return 0;
}
