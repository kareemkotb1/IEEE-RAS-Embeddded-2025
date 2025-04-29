#include <stdio.h>

void copyString(char *src, char *dest) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main() {
    char str1[1000];
    char str2[1000];

    fgets(str1, sizeof(str1), stdin);

    copyString(str1, str2);

    printf("Original String: %s", str1);
    printf("Copied String: %s", str2);

    return 0;
}
