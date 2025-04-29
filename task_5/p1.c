#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    char *p1 = str1, *p2 = str2;
    int identical = 1;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    while (*p1 != '\0' && *p2 != '\0') {
        if (*p1 != *p2) {
            identical = 0;
            break;
        }
        p1++;
        p2++;
    }

    if ((*p1 != '\0' && *p1 != '\n') || (*p2 != '\0' && *p2 != '\n')) {
        identical = 0;
    }

    if (identical)
        printf("Both strings are Identical\n");
    else
        printf("Strings are Not Identical\n");

    return 0;
}
