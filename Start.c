#include <stdio.h>

int main()
{

    // <=====================================*** Output Formate *** =====================================>

    int age = 55;
    // printf("Age is %d \n", age);

    float num = 546.05;
    // printf("The number is %f \n", num);

    char star = '*';
    // printf("The symbol is %c \n", star);

    // NOTE:  %d is for int , %f is for float, %c is for char

    // <========================================*** Input *** ========================================>

    // int age_01;
    // printf("Entre your age: ");
    // scanf("%d", &age_01);
    // printf("Your are %d years old", age_01);

    // <================================*** Adding, Subtracting.... *** ===============================>

    // int a, b;
    // printf("Enter first number: ");
    // scanf("%d", &a);

    // printf("Enter second number: ");
    // scanf("%d", &b);

    // int sum = a + b; // (OR -, *, /)

    // printf("Sum of the numbers are %d", sum); // OR ("Sum of the numbers are %d", a + b)

    // <================================*** Finding Area *** ===============================>

    int radius;
    printf("Entre radius (in meters):");
    scanf("%d", &radius);

    printf("Area of the square is %dm", 22 / 7 * radius * radius); // Similarly for other Quadrilateral



    

    return 0;
}
