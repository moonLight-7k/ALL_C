#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c, s, area_tri;

    printf("Entre three side of triangle\n");
    scanf("%d %d %d", &a, &b, &c);

    s = (a + b + c) / 2;

    area_tri = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of triangle is %d", area_tri);

    return 0;
}