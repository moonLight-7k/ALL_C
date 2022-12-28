#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void addition();
void subtraction();
void multiplication();
void division();
void exit();

int main()
{
    int opt;
    do
    {
        printf(" Select an operation to perform the calculation in C Calculator: ");
        printf(" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Exit \n");

        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            addition();
            break;

        case 2:
            subtraction();
            break;

        case 3:
            multiplication();
            break;

        case 4:
            division();

        case 5:
            exit(0);
            break;

        default:
            printf(" Please try again!! ");
            break;
        }
        printf(" \n \n --------------------- \n ");
    } while (opt != 5);

    return 0;
}

void addition()
{
    int num1, num2, result;
    printf(" The first number is: ");
    scanf("  %d", &num1);
    printf(" The second number is: ");
    scanf("  %d", &num2);
    result = num1 + num2;
    printf(" The addition of %d + %d is: %d", num1, num2, result);
}

void subtraction()
{
    int num1, num2, result;
    printf(" The first number is: ");
    scanf("  %d", &num1);
    printf(" The second number is: ");
    scanf("  %d", &num2);
    result = num1 - num2;
    printf(" The subtraction of %d - %d is: %d", num1, num2, result);
}

void multiplication()
{
    int num1, num2, result;
    printf(" The first number is: ");
    scanf("  %d", &num1);
    printf(" The second number is: ");
    scanf("  %d", &num2);
    result = num1 * num2;
    printf(" The multiply of %d * %d is: %d", num1, num2, result);
}

void division()
{
    int num1, num2, result;
    printf(" The first number is: ");
    scanf("  %d", &num1);
    printf(" The second number is: ");
    scanf("  %d", &num2);

    if (num2 == 0)
    {
        printf(" \n You cannot divide by zero. Please enter another value ");
        scanf("%d", &num2);
    }
    result = num1 / num2;
    printf(" \n The division of %d / %d is: %d", num1, num2, result);
}


