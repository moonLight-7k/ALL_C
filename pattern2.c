#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            if (i == (N / 2) + 1 || j == (N / 2) + 1)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}