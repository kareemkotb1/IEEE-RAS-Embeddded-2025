#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return b != 0 ? a / b : 0;
}

int main() {
    float num1, num2, result;
    char op;
    float (*operation)(float, float);

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(op) {
        case '+':
            operation = add;
            break;
        case '-':
            operation = subtract;
            break;
        case '*':
            operation = multiply;
            break;
        case '/':
            operation = divide;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    result = operation(num1, num2);

    if (op == '/' && num2 == 0)
        printf("Cannot divide by zero\n");
    else
        printf("Result: %.2f\n", result);

    return 0;
}
