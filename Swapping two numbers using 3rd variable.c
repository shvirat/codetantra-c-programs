#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers=");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping Num1=%d, Num2=%d",a,b);
    return 0;
    }
