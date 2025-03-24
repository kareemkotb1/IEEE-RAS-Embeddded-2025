#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    scanf("%s", word);

    int len = strlen(word);
    int is_palindrome = 1;

    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("The word '%s' is a palindrome.\n", word);
    } else {
        printf("The word '%s' is not a palindrome.\n", word);
    }

    return 0;
}