#include <stdio.h>

void sortAscending(int *arr, int n) {
    int *i, *j, temp;
    for (i = arr; i < arr + n - 1; i++) {
        for (j = i + 1; j < arr + n; j++) {
            if (*i > *j) {
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

void sortDescending(int *arr, int n) {
    int *i, *j, temp;
    for (i = arr; i < arr + n - 1; i++) {
        for (j = i + 1; j < arr + n; j++) {
            if (*i < *j) {
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

void printArray(int *arr, int n) {
    int *p;
    for (p = arr; p < arr + n; p++) {
        printf("%d", *p);
        if (p < arr + n - 1) {
            printf(", ");
        }
    }
    printf(",\n");
}

int main() {
    int arr[100], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }

    sortAscending(arr, n);
    printf("Array in ascending order: ");
    printArray(arr, n);

    sortDescending(arr, n);
    printf("Array in descending order: ");
    printArray(arr, n);

    return 0;
}
