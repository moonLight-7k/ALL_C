#include <stdio.h>

int main()
{

    float P, C, M, E, O;
    printf("Please input your marks of Physics,Chemistry,Maths,English,Optional\n");
    scanf("%f%f%f%f%f", &P, &C, &M, &E, &O);
    float T;
    T = P + C + M + E + O;
    printf("Total marks is = %f", T);
    float Per;
    Per = (T / 500) * 100;
    printf("Total percentage is = %f", Per);

    return 0;
}
