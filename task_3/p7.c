#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[100005];
    scanf("%s", s);

    int count = 1; // أول حرف موجود
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
