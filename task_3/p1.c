#include <stdio.h>
int main() {
    int arr[100], n, min;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    min = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] < min) min = arr[i];
    printf("%d\n", min);
    return 0;
}
