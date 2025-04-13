#include <stdio.h>

int can_reach(long long n, long long value) {
    if (value == n) return 1;
    if (value > n) return 0;
    return can_reach(n, value * 10) || can_reach(n, value * 20);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        if (can_reach(n, 1)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}