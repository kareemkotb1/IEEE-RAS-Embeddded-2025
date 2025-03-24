#include <stdio.h>

int main() {
    int num, sum_divisors = 0;
    
    while (1) {
        printf("Enter a positive number: ");
        scanf("%d", &num);
        if (num > 0)
            break;
    }
    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum_divisors += i;
        }
    }
    
    if (sum_divisors == num) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }
    
    return 0;
}