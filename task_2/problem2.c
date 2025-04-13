#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    int original = num, sum = 0, digits = 0, temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return (sum == original);
}

void print_armstrong(int start, int end) {
    printf("Armstrong numbers between %d to %d are: ", start, end);
    int found = 0;
    for (int i = start; i <= end; i++) {
        if (is_armstrong(i)) {
            if (found > 0) printf(", ");
            printf("%d", i);
            found++;
        }
    }
    if (found == 0) printf("None");
    printf(".\n");
}

int main() {
    int lower, upper;
    printf("lower limit: ");
    scanf("%d", &lower);
    printf("upper limit: ");
    scanf("%d", &upper);
    print_armstrong(lower, upper);
    return 0;
}