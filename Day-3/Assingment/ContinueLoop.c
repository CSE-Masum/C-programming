#include<stdio.h>

void forLoop()
{
    int i;
    for( i = 1 ; i <= 10 ; i= i + 1 )
    {
        if( i == 5)
        {
            continue;
        }
        printf("%d ",i);
    }
}

int main()
{
    forLoop();
    return 0;
}