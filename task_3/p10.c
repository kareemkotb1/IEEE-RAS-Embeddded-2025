#include <stdio.h>
int main() {
    int n, sum = 0, temp_sum;
    scanf("%d", &n);
    int square[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &square[i][j]);
    for (int j = 0; j < n; j++) sum += square[0][j];
    for (int i = 1; i < n; i++) {
        temp_sum = 0;
        for (int j = 0; j < n; j++) temp_sum += square[i][j];
        if (temp_sum != sum) {
            printf("The square is not a magic square.\n");
            return 0;
        }
    }
    for (int j = 0; j < n; j++) {
        temp_sum = 0;
        for (int i = 0; i < n; i++) temp_sum += square[i][j];
        if (temp_sum != sum) {
            printf("The square is not a magic square.\n");
            return 0;
        }
    }
    temp_sum = 0;
    for (int i = 0; i < n; i++) temp_sum += square[i][i];
    if (temp_sum != sum) {
        printf("The square is not a magic square.\n");
        return 0;
    }
    temp_sum = 0;
    for (int i = 0; i < n; i++) temp_sum += square[i][n - i - 1];
    if (temp_sum != sum) {
        printf("The square is not a magic square.\n");
        return 0;
    }
    printf("The square is a magic square.\n");
    return 0;
}
