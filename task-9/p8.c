void swapTop() {
    if (top >= 1) {
        int temp = stack[top];
        stack[top] = stack[top - 1];
        stack[top - 1] = temp;
    }
}