//C program to find the greatest of three numbers
#include <stdio.h>
int main()
{
	int a,b,c,big=0;
	printf("Enter three numbers= ");
	scanf("%d %d %d",&a,&b,&c);
//Implimenting some calculations	
  if(a>b)
  {big=a;}
	else
	{big=b;}
	if(c>big)
	{big=c;}
//Printing the result  
  printf("%d is the greatest number",big);
	return 0;
}
