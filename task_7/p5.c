#include <stdio.h>

typedef enum {
    ADD = '+',
    SUB = '-',
    MUL = '*',
    DIV = '/',
    AND = '&',
    OR  = '|',
    NOT = '!'
} Operation;

int main() {
    int a, b;
    char op;

    printf("Enter first operand: ");
    scanf("%d", &a);

    printf("Enter second operand: ");
    scanf("%d", &b);

    printf("Enter operation (+ - * / & | !): ");
    scanf(" %c", &op);

    switch ((Operation)op) {
        case ADD:
            printf("Result: %d\n", a + b);
            break;
        case SUB:
            printf("Result: %d\n", a - b);
            break;
        case MUL:
            printf("Result: %d\n", a * b);
            break;
        case DIV:
            if (b != 0)
                printf("Result: %d\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;
        case AND:
            printf("Result: %d\n", a & b);
            break;
        case OR:
            printf("Result: %d\n", a | b);
            break;
        case NOT:
            printf("Result (on first operand): %d\n", ~a);
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
