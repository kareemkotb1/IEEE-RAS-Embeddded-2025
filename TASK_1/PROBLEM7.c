#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num, sum_digits = 0;
    
    while (1) {
        printf("Enter a positive integer: ");
        scanf("%d", &num);
        if (num > 0)
            break;
    }
    
    int temp = num;
    while (temp > 0) {
        sum_digits += temp % 10;
        temp /= 10;
    }
    
    if (is_prime(sum_digits)) {
        printf("The sum of digits (%d) is a prime number.\n", sum_digits);
    } else {
        printf("The sum of digits (%d) is not a prime number.\n", sum_digits);
    }
    
    return 0;
}