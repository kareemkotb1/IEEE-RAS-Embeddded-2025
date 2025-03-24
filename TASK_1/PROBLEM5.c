#include <stdio.h>

int main() {
    int N, M;

    while (1) {
        scanf("%d %d", &N, &M);

        if (N <= 0 || M <= 0) {
            break;
        }

        int start, end;
        if (N <= M) {
            start = N;
            end = M;
        } else {
            start = M;
            end = N;
        }

        int sum = 0;
        for (int i = start; i <= end; i++) {
            printf("%d ", i);
            sum += i;
        }

        printf("sum =%d\n", sum);
    }

    return 0;
}