#include <stdio.h>

int main(void)
{

    int input;

    printf("Entre a number:");
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
