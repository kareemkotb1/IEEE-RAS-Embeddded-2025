#include <stdio.h>
void print_even(const char *str) {
    while (*str) {
        if ((*str - '0') % 2 == 0)
            printf("%c", *str);
        str++;
    }
    printf("\n");
}
int main() {
    char str[] = "012345678";
    print_even(str);
    return 0;
}
