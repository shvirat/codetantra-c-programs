//C Program to print Armstrong numbers from 1 to n
#include <stdio.h>
#include <math.h>
int main()
{
//Initialising all variables
  int n,sum,z,num,count;
//Taking input
	scanf("%d",&n);
	printf("All Armstrong number between 1 and %d are:\n",n);
//This loop is checking each number is armstrong or not
  for(z=1;z<=n;z++)
		{
			num=z;
			sum=0;
			count=0;
//While loop for identifying power of digits
			while(num!=0)
				{
					num /= 10;
					count++;
				}
			num=z;
//This while loop is creating a number and storing in 'sum'
			while(num!=0)
				{
					sum += pow((num%10),count);
					num /= 10;
				}
//Finally!! 'if' condition the number is armstrong or not
//If yes then print it and skip the number if not
			if(sum == z)
			{
				printf("%d ",sum);
			}
		}
	return 0;
}
