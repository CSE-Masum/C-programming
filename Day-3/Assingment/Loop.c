#include<stdio.h>

void forLoop()
{
    int i;
    for( i = 1 ; i <= 5 ; i= i + 1 )
    {
        printf("%d ",i);
    }
}

int main()
{
    forLoop();
    return 0;
}