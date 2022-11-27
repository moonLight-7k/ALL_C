#include <stdio.h>

int main()
{
    int age = 33;
    int *prt = &age;
    int _age = *prt;

    printf("%p", &age);
    printf("%u", &age);

}