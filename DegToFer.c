
#include <stdio.h>
int main()
{
    float fahrenheit, celsius;

    printf("Entre temperature in Celsius:", celsius);
    scanf("%f", &celsius);

    fahrenheit = ((celsius * 9) / 5) + 32;
    printf("\n Temperature in fahrenheit is:  %f", fahrenheit);

    return (0);
}