#include <stdio.h>

#define N 3 // Number of rows and columns in the matrix

// Find the transpose of a matrix and return the result
int **transpose(int a[N][N])
{
    int **result = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; i++)
    {
        result[i] = (int *)malloc(N * sizeof(int));
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            result[i][j] = a[j][i];
        }
    }
    return result;
}

int main()
{
    // Initialize a matrix
    int a[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Find the transpose of the matrix
    int **result = transpose(a);

    // Print the result
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
