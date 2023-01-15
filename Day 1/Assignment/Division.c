#include<stdio.h>

int main()
{
    int a,b,sum;
    printf("First Number:\n");
    scanf("%d",&a);
    printf("Second Number:\n");
    scanf("%d",&b);
    sum = a/b;
    printf("Multiplication");
    printf("%d/%d=%d",a,b,sum);
    return 0;
}