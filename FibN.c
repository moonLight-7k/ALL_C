#include <stdio.h>

//<================== By Using Fn =================>
/*int fib(int n);

int main()
{
    printf("%d", fib(6));
}
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibN1 = fib(n - 1);
    int FibN2 = fib(n - 2);

    int fibN = fibN1 + FibN2;

    return fibN;
}*/

//<===================== By Loop =========================>
int main()
{

    int n1 = 0, n2 = 1, n3, number;

    printf("Enter the number of elements:");
    scanf("%d", &number);
    printf("\n%d %d", n1, n2);   // printing 0 and 1

    for (int i = 2; i < number; ++i) 
    // loop starts from 2 because 0 and 1 are already printed
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }
}