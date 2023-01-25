#include<stdio.h>

void costCalculation()
{
    int cost;
    scanf("%d", &cost);

    if(cost > 500)
    {
        cost = cost - cost*0.2;
    }
    else
    {
        cost = cost - cost*0.1;
    }
    printf("%d",cost);
}

int main()
{
    costCalculation;
    return 0;
}