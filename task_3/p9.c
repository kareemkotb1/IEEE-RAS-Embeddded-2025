#include <stdio.h>

int main() {
    int n, a[1000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int min = a[0], count = 0;

    for (int i = 1; i < n; i++)
        if (a[i] < min)
            min = a[i];

    for (int i = 0; i < n; i++)
        if (a[i] == min)
            count++;

    if (count % 2 == 1)
        printf("Lucky\n");
    else
        printf("Unlucky\n");

    return 0;
}
