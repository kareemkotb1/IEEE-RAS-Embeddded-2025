#ifndef MATH_UTILS_H
#define MATH_UTILS_H

typedef struct {
    int x;
    int y;
} Numbers;

int add(Numbers n);
int subtract(Numbers n);
int multiply(Numbers n);
float divide(Numbers n);
int power(Numbers n);

#endif

// File: math_utils.c
#include "math_utils.h"
#include <math.h>

int add(Numbers n) { return n.x + n.y; }
int subtract(Numbers n) { return n.x - n.y; }
int multiply(Numbers n) { return n.x * n.y; }
float divide(Numbers n) { return (n.y != 0) ? (float)n.x / n.y : 0.0; }
int power(Numbers n) { return pow(n.x, n.y); }

// File: main.c
#include <stdio.h>
#include "math_utils.h"

int main() {
    Numbers n;
    printf("Enter two numbers: ");
    scanf("%d %d", &n.x, &n.y);
    printf("Add: %d\n", add(n));
    printf("Subtract: %d\n", subtract(n));
    printf("Multiply: %d\n", multiply(n));
    printf("Divide: %.2f\n", divide(n));
    printf("Power: %d\n", power(n));
    return 0;
}