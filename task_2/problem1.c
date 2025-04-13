#include <stdio.h>

const char* check_divisible(int num1, int num2) {
    if (num2 == 0) return "Can't divide by zero!";
    if (num1 % num2 == 0) return "Divides evenly!";
    return "Doesn't divide evenly.";
}

int main() {
    int first, second;
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    printf("%d and %d: %s\n", first, second, check_divisible(first, second));
    return 0;
}