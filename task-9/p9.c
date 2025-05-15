char queue[SIZE];
int front = -1, rear = -1;

void enqueue(char c) {
    if (rear < SIZE - 1) {
        if (front == -1) front = 0;
        queue[++rear] = c;
    }
}

char dequeue() {
    if (front <= rear)
        return queue[front++];
    return '-';
}
