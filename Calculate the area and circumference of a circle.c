//Calculate the area and circumference of a circle
#include <stdio.h>
int main()
{
	float r,aoc,coc,pi;
	pi=3.14;
	printf("Enter radius= ");
	scanf("%f",&r);
	aoc=pi*r*r;
	coc=2*pi*r;
	printf("Area of Circle= %.2fCircumference of Circle= %.2f",aoc,coc);
	return 0;
}
