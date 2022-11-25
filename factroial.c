#include <stdio.h>

void main()
{

    int n;

    printf("Entre a numer: \n");
    scanf("%d", &n);

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial is %d", fact);


}