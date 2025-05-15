struct CNode {
    int data;
    struct CNode* next;
};

void insertCircular(struct CNode** head, int pos, int value) {
    struct CNode* newNode = (struct CNode*)malloc(sizeof(struct CNode));
    newNode->data = value;
    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
        return;
    }
    if (pos == 0) {
        struct CNode* last = *head;
        while (last->next != *head) last = last->next;
        newNode->next = *head;
        last->next = newNode;
        *head = newNode;
        return;
    }
    struct CNode* temp = *head;
    for (int i = 0; i < pos - 1 && temp->next != *head; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
