#include <stdio.h>

int main() {
    int *ptr = (int*)0x600000;

    *ptr = 42;

    printf("Value at 0x600000: %d\n", *ptr);

    return 0;
}
