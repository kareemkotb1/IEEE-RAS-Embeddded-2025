#include <stdio.h>
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int *p1 = &num1, *p2 = &num2;

    printf("Sum = %d\n", *p1 + *p2);
    printf("Difference = %d\n", *p1 - *p2);
    printf("Product = %d\n", (*p1) * (*p2));
    if (*p2 != 0)
        printf("\nQuotient = %d\n", *p1 / *p2);
    else
        printf("\nQuotient = Undefined (division by zero)\n");

    return 0;
}
