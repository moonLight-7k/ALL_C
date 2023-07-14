#include <stdio.h>

#define ROWS_A 2
#define COLS_A 3
#define ROWS_B 3
#define COLS_B 2

int main()
{
    int a[ROWS_A][COLS_A] = {{1, 2, 3}, {4, 5, 6}};
    int b[ROWS_B][COLS_B] = {{7, 8}, {9, 10}, {11, 12}};
    int result[ROWS_A][COLS_B] = {0};

    if (COLS_A != ROWS_B)
    {
        // matrices cannot be multiplied if number of columns in A
        // is not equal to number of rows in B
        printf("Error: cannot multiply matrices with dimensions %dx%d and %dx%d\n", ROWS_A, COLS_A, ROWS_B, COLS_B);
        return 0;
    }

    // perform matrix multiplication
    int i, j, k;
    for (i = 0; i < ROWS_A; i++)
    {
        for (j = 0; j < COLS_B; j++)
        {
            for (k = 0; k < COLS_A; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // print result
    printf("Result matrix:\n");
    for (i = 0; i < ROWS_A; i++)
    {
        for (j = 0; j < COLS_B; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
