#include <stdio.h>

int main()
{
    int a, b, c, n, sum;
    printf("Enter a Three Digit Number:");
    scanf("%d", &n);

    a = n / 100;
    printf("%d", a);

    b = ((n % 100) / 10);
    printf("%d", b);

    c = n % 10;
    printf("%d", c);

    sum = a + b + c;
    printf(" Sum of Individual Digits of Given Numbers is %d", sum);

    return 0;
}