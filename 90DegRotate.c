#include <stdio.h>

int main(void)
{
    int r, c;

    printf("Enter number of rows/columns:");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    printf("Enter the elements of matrix:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            scanf("%d", &arr[i][j]);
        }
    }

    int transpose[r][c];
    // ------------transpose-----------------
    printf("Transpose of the matrix is:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    // ---------------------rotating------------------
    printf("90 Degree rotation\n");

    for (int i = 0; i < r; i++)
    {
        int j = 0;
        int k = r - 1;
        while (j < k)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    // TODO rotation correct
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)

        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
