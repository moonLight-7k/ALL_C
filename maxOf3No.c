#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Entre three numbers ");

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("%d is the max entred number", a);
    }
    if (b >= a && b >= c)
    {
        printf("%d is the max entred number", b);
    }
    else
    {
        printf("%d is the max entered number", c);
    }
}