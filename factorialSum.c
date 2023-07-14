#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += factorial(i);
    }
    printf("The sum of the series is %d", sum);
    return 0;
}