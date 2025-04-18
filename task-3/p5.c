#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int mainDiagonal = 0;
    int secondaryDiagonal = 0;

    for (int i = 0; i < n; i++) {
        mainDiagonal += matrix[i][i];     
        secondaryDiagonal += matrix[i][n - i - 1]; 
    }

    int result = abs(mainDiagonal - secondaryDiagonal);

    printf("Absolute difference between diagonals = %d\n", result);

    return 0;
}
