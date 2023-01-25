#include<Stdio.h>

void getResult()
{
    int value;
    scanf("%d", &value);

    int index = value/10;
    float result;

    switch(index)
    {
        case 8:
        {
            result = 5.00;
            break;
        }
        case 7:
        {
            result = 4.50;
            break;
        }
        case 6:
        {
            result = 4.00;
            break;
        }
        case 5:
        {
            result = 3.50;
            break;
        }
        case 4:
        {
            result = 3.00;
            break;
        }
        defult:
        {
            result = 0;
        }
    }
    printf("%f",result);
}

int main()
{
    getResult();
    return 0;
}