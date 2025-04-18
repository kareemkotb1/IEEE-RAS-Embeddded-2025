#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], sum[3][3];

    printf("Enter elements for Matrix 1 (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter elements for Matrix 2 (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("\nSum of both matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
      
    }
    return 0;
}