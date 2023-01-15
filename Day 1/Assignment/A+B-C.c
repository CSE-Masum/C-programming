#include<stdio.h>

int main()
{
    int a,b,c,sum,Ans;
    printf("First Number:\n");
    scanf("%d",&a);
    printf("Second Number:\n");
    scanf("%d",&b);
    printf("Third Number:\n");
    scanf("%d",&c);

    //Calculation

    sum = a+b;
    printf("Summation\n");
    printf("%d+%d=%d\n",a,b,sum);
    Ans = sum-c;
    printf("Subtraction\n");
    printf("%d-%d=%d\n",sum,c,Ans);
    return 0;
}