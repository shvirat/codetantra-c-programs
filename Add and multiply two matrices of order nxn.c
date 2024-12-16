// C Program to add and multiply two matrices of order nxn
// Although this is very simple no need of explanation (chai pio biscuit khao, chai pio biscuit khao) 
#include <stdio.h>
int main()
{
	int a,b,c,d,i,j,k;
	printf("For 1st Matrix\nEnter no of rows:");
	scanf("%d",&a);
	printf("Enter no of columns:");
	scanf("%d",&b);
	printf("For 2nd Matrix\nEnter no of rows:");
	scanf("%d",&c);
	printf("Enter no of columns:");
	scanf("%d",&d);
	printf("Enter elements of 1st matrix ");
	int mat[a][b],mad[a][b],sum[a][b],mul[a][b];
	for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
				{
					scanf("%d",&mat[i][j]);
				}
		}
	printf("Enter elements of 2nd matrix ");
	for(i=0;i<c;i++)
		{
			for(j=0;j<d;j++)
				{
					scanf("%d",&mad[i][j]);
				}
		}
	if(a!=c || b!=d)
	{
		printf("Addition not possible\nMultiplication not possible\n");
		return 1;
	}
	for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
				{
					mul[i][j]=0;
				}
		}
	printf("Addition:\n");
	for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
				{
					sum[i][j]=mat[i][j]+mad[i][j];
					printf("%d\t",sum[i][j]);
				}
			printf("\n");
		}
	printf("Multiplication:\n");
	for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
				{
					for(k=0;k<b;k++)
						{
							mul[i][j]+=(mat[i][k]*mad[k][j]);
						}
					printf("%d\t",mul[i][j]);
				}
			printf("\n");
		}
	return 0;
}
