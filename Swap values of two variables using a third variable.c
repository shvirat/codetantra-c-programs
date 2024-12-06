//swap values of two variables using a third variable.
#include <stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter two numbers= ");
	scanf("%d %d",&a,&b);
//Basic formula to swap values
	temp=a;
	a=b;
	b=temp;
	printf("After swapping Num1 = %d , Num2=  %d",a,b);
	return 0;
}
