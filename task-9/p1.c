#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void printList(struct Node* head) {
    int length = 0;
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
        length++;
    }
    printf("\nLength = %d\n", length);
}