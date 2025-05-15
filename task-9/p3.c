#include <stdio.h>
#include <stdlib.h>
int getNode(struct Node* head, int pos) {
    int count = 0;
    while (head != NULL) {
        if (count == pos)
            return head->data;
        count++;
        head = head->next;
    }
    return -1;
}

void insertAtPosition(struct Node** head, int pos, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if (pos == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    for (int i = 0; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL) return;
    newNode->next = temp->next;
    temp->next = newNode;
}
