#include <stdio.h>

int main() {
    int a = 10;
    int *p_int = &a;

    char c = 'K';
    char *p_char = &c;

    float f = 3.14;
    float *p_float = &f;

    long l = 1234567890;
    long *p_long = &l;

    printf("Integer value: %d, Address: %p\n", *p_int, (void*)p_int);
    printf("Char value: %c, Address: %p\n", *p_char, (void*)p_char);
    printf("Float value: %.2f, Address: %p\n", *p_float, (void*)p_float);
    printf("Long value: %ld, Address: %p\n", *p_long, (void*)p_long);

    return 0;
}
