#include <stdio.h>

int main()
{
    int a, b, c, n, sum;

    printf("Enter three digit number \n");
    scanf("%d", &n);

    a = n % 10;
    // printf("a is %d \n", a);

    b = (n % 100) / 10;
    // printf("b is %d \n", b);

    c = (n % 1000) / 100;
    // printf("c is %d \n", c);

    sum = a + b + c;
    printf("Sum of the numbers is %d", sum);

    return 0;
}