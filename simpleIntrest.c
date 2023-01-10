#include <stdio.h>
int main()
{

    int p, r, t, int_amt;
    printf("Input principle: \n");
    scanf("%d", &p);
    printf("Rate of interest : \n");
    scanf("%d", &r);
    printf("Time to find simple interest: \n");
    scanf("%d", &t);

    int_amt = (p * r * t) / 100;
    printf("Simple interest = %d", int_amt);
    return 0;
}