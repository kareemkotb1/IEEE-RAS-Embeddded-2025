#include <stdio.h>

int is_odd(long long n) {
    return n % 2 == 1;
}

int is_binary_palindrome(long long n) {
    int binary[64], length = 0;
    while (n > 0) {
        binary[length++] = n % 2;
        n /= 2;
    }
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        if (binary[i] != binary[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    long long n;
    scanf("%lld", &n);
    if (is_odd(n) && is_binary_palindrome(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}