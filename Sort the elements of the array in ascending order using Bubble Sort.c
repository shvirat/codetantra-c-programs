// C Program to sort the elements of the array in ascending order using the Bubble Sort technique
#include <stdio.h>
int main()
{int array[5],i,temp;
// After initialisation taking elements input
 for(i=0;i<5;i++)
	 {printf("arr[%d] = ",i);
	  scanf("%d",&array[i]);}
// Printing default/unsorted array
 printf("Unsorted array: \n");
 for(i=0;i<5;i++)
	 {
		 printf("%d ",array[i]);
	 }
// Bubble sorting algorithm --pushing greatest value to the very last 
 for(i=0;i<4;i++) //0(n*n)
	 {for(int j=0;j<4-i;j++)
		if(array[j]>array[j+1])
		{temp=array[j];
		 array[j]=array[j+1];
		 array[j+1]=temp;}
		 }
// Printing sorted array in ascending order
 printf("Sorted array: \n");
 for(i=0;i<5;i++)
	 {printf("%d ",array[i]);
	 }
 return 0;
}
