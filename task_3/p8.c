#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int in_word = 0, word_count = 0;

    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            if (!in_word) {
                in_word = 1;
                word_count++;
            }
        } else {
            in_word = 0;
        }
    }

    printf("%d\n", word_count);
    return 0;
}
