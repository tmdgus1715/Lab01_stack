#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void initStack(Stack* s) {
    s->top = -1;
}

int isEmpty(Stack* s) {
    return (s->top == -1);
}

int isFull(Stack* s) {
    return (s->top == MAX_SIZE - 1);
}

void push(Stack* s, int x) {
    if (isFull(s)) {
        printf("Stack Overflow: cannot push %d\n", x);
        return;
    }
    s->top++;
    s->data[s->top] = x;
}

int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow: cannot pop\n");
        return -1;
    }
    int value = s->data[s->top];
    s->top--;
    return value;
}

int peek(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty: no top element\n");
        return -1;
    }
    return s->data[s->top];
}
