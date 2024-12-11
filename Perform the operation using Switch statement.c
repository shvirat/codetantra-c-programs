//C program that takes two operands and one operator from the user, perform the operation, and prints the result by using Switch statement
#include <stdio.h>
int main()
{
	int a,b,c;
	char op;
//Input operator (using: char)
	printf("Enter your operator:");
	scanf("%c",&op);
//Input two operands (using: int)
	printf("Enter the values of a and b\n");
	scanf("%d%d",&a,&b);
//Switch function starts here	
	switch(op)
		{
			case '+': c = a + b;
			printf("addition of two numbers is %d",c);
			break;
			case '%': c = a % b;
			printf("Remainder of two numbers is %d",c);
			break;
			case '-': c = a - b;
			printf("subtraction of two numbers is %d",c);
			break;
			case '/': c = a /b;
			printf("Quotient of two numbers is %d",c);
			break;
			case '*': c = a * b;
			printf("multiplication of two numbers is %d",c);
			break;
		}
//All conditions ended output printed
	return 0;
}
