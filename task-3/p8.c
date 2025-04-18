#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;
    int inWord = 0, wordCount = 0;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (isalpha(ch)) {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        } else {
            inWord = 0; 
        }
    }

    printf("%d\n", wordCount);
    return 0;
}
