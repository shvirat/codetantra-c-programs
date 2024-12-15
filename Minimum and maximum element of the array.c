// C Program to find the minimum and maximum element of the array
#include<stdio.h>
int main()
{
	int n,temp;
	printf("Enter size of the array : ");
	scanf("%d",&n);
// Initialising an array with user input
	int array[n];
// Input array elements
	printf("Enter elements in array : ");
	for(int i=1;i<=n;i++)
		{scanf("%d",&array[i]);}
// This 'for' loop sorts all the elements in descending order
	for(int i=1;i<n;i++)
		{for(int j=i+1;j<=n;j++)
		{if(array[j]>array[i])
		{
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
    }}}
// Printing last and first element 'coz array is sorted now
	printf("minimum of array is : %d\n",array[n]);
	printf("maximum of array is : %d",array[1]);
	return 0;
}
