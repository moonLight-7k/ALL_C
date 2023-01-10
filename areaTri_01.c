#include <stdio.h>

int main()
 
{
    float b, h, area_tri;

    printf("Entre base and height of triangle\n");
    scanf("%f %f", &b, &h);

    area_tri = 0.5 * b * h;

    printf("Area of triangle is %f", area_tri);

    return 0;
}