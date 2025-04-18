#include <stdio.h>

int main() {
  
    int n;
    scanf("%d", &n);

    int numbers[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    int x;
    scanf("%d", &x);
    
    int y = -1; 
    for (int i = 0; i < n; i++) {
        if (numbers[i] == x) {
            y = i + 1; 
            break; 
        }
    }

    if (y != -1) {
        printf("%d\n", y);
    } else {
        printf("not exist \n");
    }
    return 0;
}