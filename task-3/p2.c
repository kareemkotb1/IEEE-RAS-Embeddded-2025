#include <stdio.h>

int main() {
 
    int n;
    scanf("%d", &n);
    
    int numbers[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    int smallest = numbers[0]; 
    int position = 1;
    for (int i = 1; i < n; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i]; 
            position = i + 1; 
        }
    }
        printf("%d %d\n", smallest, position);
    
    return 0;
}