#include <stdio.h>

int fact(int n);

int main()
{
    int n;

    printf("Entre the number:");
    scanf("%d", &n);

    printf("Factorial is %d", fact(n));
    return 0;
}

int fact(int n)
{
    if (n == 0)
        return 1;

    else
        return n * fact(n - 1);
}