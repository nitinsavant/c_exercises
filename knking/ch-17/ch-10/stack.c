#include <stdio.h>
#include <stdbool.h.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

bool is_full(void) {
    return top == STACK_SIZE;
}

bool is_empty(void) {
    return top == 0;
}

void make_empty(void) {
    top = 0;
}

void push(int value) {
    contents[top++] = value;
}

int pop(void) {
    return contents[--top];
}