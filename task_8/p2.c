#include <stdio.h>
#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define ADDITION

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
#ifdef ADDITION
    printf("Sum = %d\n", ADD(x, y));
#else
    printf("Difference = %d\n", SUB(x, y));
#endif
    return 0;
}