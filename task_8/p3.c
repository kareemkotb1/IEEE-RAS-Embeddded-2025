#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = (int*)malloc(3 * sizeof(int));
    float *b = (float*)calloc(3, sizeof(float));
    char *c = (char*)malloc(3 * sizeof(char));

    if (a && b && c) {
        for (int i = 0; i < 3; i++) a[i] = i + 1;
        b = (float*)realloc(b, 5 * sizeof(float));
        for (int i = 0; i < 5; i++) b[i] = i + 0.5f;
        for (int i = 0; i < 3; i++) c[i] = 'A' + i;

        printf("Array a: "); for(int i=0;i<3;i++) printf("%d ", a[i]); printf("\n");
        printf("Array b: "); for(int i=0;i<5;i++) printf("%.1f ", b[i]); printf("\n");
        printf("Array c: "); for(int i=0;i<3;i++) printf("%c ", c[i]); printf("\n");
    }

    free(a);
    free(b);
    free(c);
    return 0;
}
