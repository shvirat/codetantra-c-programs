//Calculate the Simple Interest and Compound Interest
#include <stdio.h>
#include <math.h>
int main()
{
	float p,r,t,si,am,ci;
//Taking user inputs
	printf("Enter Principle=");
	scanf("%f",&p);
	printf("Enter Rate=");
	scanf("%f",&r);
	printf("Enter Time=");
	scanf("%f",&t);
//Basic maths calculation
	si=p*r*t/100;
	am=p*pow((1+(r/100)),t);
	ci=am-p;
//Printing result as asked
	printf("Simple Interest=%f\nCompound Interest=%f",si,ci);
	return 0;
}
