#include <stdio.h>

int main()
{
    // Declare variables
    int row1, col1, row2, col2;

    // Get dimensions for the first matrix
    printf("Enter dimensions for the first matrix (rows columns): ");
    scanf("%d %d", &row1, &col1);

    // Get dimensions for the second matrix
    printf("Enter dimensions for the second matrix (rows columns): ");
    scanf("%d %d", &row2, &col2);

    // Check if matrices can be added, subtracted, or multiplied
    if (row1 != row2 || col1 != col2)
    {
        printf("Matrices cannot be added, subtracted, or multiplied with the given dimensions.\n");
        return 1;
    }

    // Declare matrices
    int matrix1[row1][col1], matrix2[row2][col2], result[row1][col1];

    // Get input for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < row1; ++i)
    {
        for (int j = 0; j < col1; ++j)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Get input for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < row2; ++i)
    {
        for (int j = 0; j < col2; ++j)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Addition
    printf("\nMatrix Addition:\n");
    for (int i = 0; i < row1; ++i)
    {
        for (int j = 0; j < col1; ++j)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    // Subtraction
    printf("\nMatrix Subtraction:\n");
    for (int i = 0; i < row1; ++i)
    {
        for (int j = 0; j < col1; ++j)
        {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    printf("\nMatrix Multiplication:\n");
    for (int i = 0; i < row1; ++i)
    {
        for (int j = 0; j < col2; ++j)
        {
            result[i][j] = 0;
            for (int k = 0; k < col1; ++k)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    // Transpose of the first matrix
    printf("\nTranspose of the First Matrix:\n");
    for (int i = 0; i < col1; ++i)
    {
        for (int j = 0; j < row1; ++j)
        {
            printf("%d\t", matrix1[j][i]);
        }
        printf("\n");
    }

    return 0;
}
