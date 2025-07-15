#include <stdio.h>
int string_length(const char *str) {
    int len = 0;
    while (*str++) len++;
    return len;
}
int main() {
    char str[] = "Embedded Systems";
    printf("Length = %d\n", string_length(str));
    return 0;
}
