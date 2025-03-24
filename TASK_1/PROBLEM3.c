#include <stdio.h>

int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);  

    int product = A * B * C * D;

    int output = product % 100;

    printf("%d\n", output); 

    return 0;
}