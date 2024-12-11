//C program that accepts marks of five subjects and finds percentage and prints grades
#include <stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,sum,pt;
//Taking input from user at once
	printf("Enter five subjects marks: ");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
//Printing Total Marks
	sum=s1+s2+s3+s4+s5;
	pt=sum/5;
//Printing percentage and grades per data using if-else conditions
	printf("Percentage = %f\n",pt);
	if(pt<55)
		printf("Grade D");
	else if(pt<70)
		printf("Grade C");
	else if(pt<85)
		printf("Grade B");
	else
		printf("Grade A");
	return 0;
}
