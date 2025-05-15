#define SIZE 100
int stack[SIZE];
int top = -1;

void push(int value) {
    if (top < SIZE - 1)
        stack[++top] = value;
}

int pop() {
    if (top >= 0)
        return stack[top--];
    return -1;
}