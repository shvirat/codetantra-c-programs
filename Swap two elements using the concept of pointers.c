// C Program to swap two elements using the concept of pointers
#include <stdio.h>
// Initiating a swap function which uses pointers
void swap(int*,int*);
int main()
{
	int a,b;
// Taking input from the user for numbers
	scanf("%d%d",&a,&b);
	printf("Before swapping the values in main a = %d, b = %d\n",a,b);
// Calling the swap function and passing addresses of 'a' and 'b'
	swap(&a,&b);
// Printing the value swapped in the main function by swap function
	printf("After swapping values in main a = %d, b = %d\n",a,b);
	return 0;
}
// Definition of swap function
void swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
//Printing swapped value in function
  printf("After swapping values in function a = %d, b = %d\n",*x,*y);
}
