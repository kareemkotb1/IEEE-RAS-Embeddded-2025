#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = (int*)malloc(3 * sizeof(int));
    free(a);
    int *d = (int*)malloc(1000 * sizeof(int));
    if (d) printf("Big block allocated\n");
    free(d);
    return 0;
}