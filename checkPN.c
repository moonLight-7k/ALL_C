#include <stdio.h>

void main()

{
    int num;
    printf("Entre a number\n");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Number is positive!!");
    }
    if (num < 0)
    {
        printf("Number is negative!!");
    }

    else if (num == 0)
    {
        printf("Number is ZERO");
    }
    
}