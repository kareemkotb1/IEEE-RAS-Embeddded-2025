struct DNode {
    int data;
    struct DNode* prev;
    struct DNode* next;
};

void insertDoublyBegin(struct DNode** head, int value) {
    struct DNode* newNode = (struct DNode*)malloc(sizeof(struct DNode));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = *head;
    if (*head != NULL)
        (*head)->prev = newNode;
    *head = newNode;
}