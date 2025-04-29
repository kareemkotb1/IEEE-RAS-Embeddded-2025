#include <stdio.h>

void getOddNumbers(int *arr, int n, int *odds, int *oddCount) {
    int *p, *q;
    *oddCount = 0;
    q = odds;
    for (p = arr; p < arr + n; p++) {
        if (*p % 2 != 0) {
            *q = *p;
            q++;
            (*oddCount)++;
        }
    }
}

int main() {
    int arr[100], odds[100];
    int n, i, oddCount;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    getOddNumbers(arr, n, odds, &oddCount);

    printf("Odd numbers are: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", *(odds + i));
    }
    printf("\n");

    printf("Total odd numbers: %d\n", oddCount);

    return 0;
}
