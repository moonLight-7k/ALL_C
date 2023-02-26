#include <stdio.h>

int main(void)
{
    int a[50], b[25], i, j, k = 1, s, m, n, temp;

    printf(" Enter the number of element in first array : ");
    scanf("%d ", &m);

    printf("\n Enter the element of first array in ascending order : \n");
    for (i = 1; i <= m; i++)
        scanf("%d ", &a[i]);

    printf(" Enter the number of element in second array : ");
    scanf("%d ", &n);

    printf("\n Enter the element of second array in ascending order : \n");
    for (i = 1; i <= n; i++)
        scanf("%d ", &b[i]);
    s = m + n;

    for (i = m + 1; i <= s; i++)
    {
        a[i] = b[k];
        for (j = 1; j <= s; j++)
        {
            if (a[j] >= a[i])
            {
                temp = a[i];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        k = k + 1;
    }
    printf("\n Array after merging :\n");
    for (i = 1; i <= s; i++)
        scanf("%d \t", a[i]);
    return (0);
}