#include <stdio.h>

union Data {
    int a;
    float b;
    char c;
};

int main() {
    union Data data;

    // Assign to int
    data.a = 65;
    printf("After assigning a = 65\n");
    printf("a = %d, b = %f, c = %c\n", data.a, data.b, data.c);
    
    // Assign to float
    data.b = 3.14;
    printf("\nAfter assigning b = 3.14\n");
    printf("a = %d, b = %f, c = %c\n", data.a, data.b, data.c);
    
    // Assign to char
    data.c = 'Z';
    printf("\nAfter assigning c = 'Z'\n");
    printf("a = %d, b = %f, c = %c\n", data.a, data.b, data.c);

    return 0;
}
