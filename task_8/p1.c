#include <stdio.h>
#define ASCENDING

void sortAscending(int *arr, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortDescending(int *arr, int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int* getArray(int *n) {
    static int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", n);
    for(int i = 0; i < *n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    return arr;
}

int main() {
    int n;
    int *arr = getArray(&n);
#ifdef ASCENDING
    sortAscending(arr, n);
#else
    sortDescending(arr, n);
#endif
    printf("Sorted array: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
