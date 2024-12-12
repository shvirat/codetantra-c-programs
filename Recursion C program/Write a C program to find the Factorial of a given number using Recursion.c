//This program can find the factorial of a given number using recursion process
//Writing the recursive function 'factorial()' in Program901a.c
#include <stdio.h>
#include "Program901a.c"
void main() {
	long int n;
	printf("Enter an integer : ");
	scanf("%ld", &n);
	printf("Factorial of %ld is : %ld\n", n ,factorial(n));
}
