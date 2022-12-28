#include <stdio.h>

int sum(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int a, b, choice;

void main()
{
    char opt;
    do
    {
        printf(" Choose an operator(+, -, *, /) to perform the operation in C Calculator \n ");
        scanf("%c", &opt);

        if (opt == '/')
        {
            printf(" You have selected: Division");
        }
        else if (opt == '*')
        {
            printf(" You have selected: Multiplication");
        }

        else if (opt == '-')
        {
            printf(" You have selected: Subtraction");
        }
        else if (opt == '+')
        {
            printf(" You have selected: Addition");
        }
        printf(" \n Enter the first number: ");
        scanf(" %d", &a); // take fist number
        printf(" Enter the second number: ");
        scanf(" %d", &b); // take second number

        switch (opt)
        {
        case '+':
            printf("%d", sum(a, b));
            break;

        case '-':
            printf("%d", subtract(a, b));
        case '*':
            printf("%d", multiply(a, b));

        case '/':
            if (b == 0) // if n2 == 0, take another number
            {
                printf(" \n Divisor cannot be zero. Please enter another value ");
                scanf("%d", &b);

                printf("%d", divide(a, b));
        }
            default: /* use default to print default message if any condition is not satisfied */
                printf(" Something is wrong!! Please check the options ");
        }   
        printf("\n Entre Yes(1) to continue and No (0) to continue\n");
        scanf("%d", &choice);
    } while (choice != 0);
}

int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}

int subtract(int a, int b)
{
    int sub = a - b;
    return sub;
}

int multiply(int a, int b)
{
    int product = a * b;
    return product;
}

int divide(int a, int b)
{
    int div = a / b;
    return div;
}