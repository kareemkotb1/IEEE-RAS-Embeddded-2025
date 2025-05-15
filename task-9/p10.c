int isEmpty() {
    return front == -1 || front > rear;
}

int isFull() {
    return rear == SIZE - 1;
}

char getFront() {
    return (front <= rear) ? queue[front] : '-';
}

char getRear() {
    return (front <= rear) ? queue[rear] : '-';
}