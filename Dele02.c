#include <stdio.h>

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0; // The 0th Fibonacci number is 0
    }
    if (n == 1)
    {
        return 1; // The 1st Fibonacci number is 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive calls
}

int main()
{
    int n = 10; // Calculate the 10th Fibonacci number
    int result = fibonacci(n);
    printf("Fibonacci(%d) = %d\n", n, result); // Output: "Fibonacci(10) = 55"
    return 0;
}
