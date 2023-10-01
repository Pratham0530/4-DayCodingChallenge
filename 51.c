#include <stdio.h>

void multiplyMatrices(int a[][100], int b[][100], int result[][100], int row1, int col1, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int row1, col1, row2, col2;
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &row1, &col1);

    int matrixA[row1][100];

    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2) {
        printf("Matrix multiplication is not possible. Columns of matrix A must be equal to rows of matrix B.\n");
        return 1;
    }

    int matrixB[row2][100];

    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    int result[row1][100];

    multiplyMatrices(matrixA, matrixB, result, row1, col1, col2);

    printf("Resultant matrix C:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
