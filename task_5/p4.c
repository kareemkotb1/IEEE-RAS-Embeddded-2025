#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int *p, *q, *r;
    int n, m, x, y, i, j, k;

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", (*(a + i) + j));
        }
    }

    scanf("%d %d", &x, &y);

    for (i = 0; i < x; i++) {
        for (j = 0; j < y; j++) {
            scanf("%d", (*(b + i) + j));
        }
    }

    if (m != x) {
        printf("Multiplication not possible\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < y; j++) {
            *(*(result + i) + j) = 0;
            for (k = 0; k < m; k++) {
                *(*(result + i) + j) += *(*(a + i) + k) * *(*(b + k) + j);
            }
        }
    }

    printf("Product of matrices is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < y; j++) {
            printf("%d ", *(*(result + i) + j));
        }
        printf("\n");
    }

    return 0;
}
