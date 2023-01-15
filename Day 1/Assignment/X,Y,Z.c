#include<stdio.h>

int main()
{
    int x,y,z;
    int fx;
    printf("Enter The Frist Value :");
    scanf("%d",&x);
    printf("Enter The Sceond Value :");
    scanf("%d",&y);
    printf("Enter The Third Value :");
    scanf("%d",&z);

    fx = 2*x - 5*y - 3*z;
    printf("%d",fx);
    return 0;
}