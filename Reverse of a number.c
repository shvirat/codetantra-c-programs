//C Program to find the reverse of a number
#include <stdio.h>
int main()
{
	int n,rev=0,rem;
	printf("Enter a number: ");
	scanf("%d",&n);
//Implimenting reverse logic
	while(n!=0)
		{rem=n%10;
		 rev = rev * 10 + rem;
		 n = n/10;
		}
//Printing reverse number stored in 'rev'
	printf("Reversed Number: %d",rev);
	return 0;
}
