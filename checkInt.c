#include <stdio.h>

void main()

{
    int num;

    printf("Entre a number\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        // printf("Number is divisible by 2");
        if (num % 4 == 0)
        {
            printf("Number is divisible by 4 and 2");
        }
        else
        {
            printf("Number is divisible by 2");
        }
    }

    else
    {
        printf("Number is not divisible by both 2 and 4 ");
    }

    
}