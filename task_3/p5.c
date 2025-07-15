#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[100][100];
    int primary_sum = 0, secondary_sum = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
            if (i == j) primary_sum += A[i][j];
            if (i + j == N - 1) secondary_sum += A[i][j];
        }
    }

    int diff = abs(primary_sum - secondary_sum);
    printf("%d\n", diff);

    return 0;
}
