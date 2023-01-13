#include <stdio.h>

int main()
{
    int r, c;

    printf("Number of rows:");
    scanf("%d", &r);

    printf("No. of columns:");
    scanf("%d", &c);

    printf("Enter the elements\n");

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    printf("Transpose of matrix is:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}