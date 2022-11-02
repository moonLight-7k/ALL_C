#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Entre three numbers ");

    scanf("%d %d %d", &a, &b, &c);

    if (b >= a && c >= a)
    {
        printf("%d is the min entred number", a);
    }
    if (b <= a && b <= c)
    {
        printf("%d is the min entred number", b);
    }
    else
    {
        printf("%d is the min entered number", c);
    }
}