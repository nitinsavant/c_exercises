#include <stdio.h>

#define STACK_SIZE = 100;

int contents[STACK_SIZE];
int *top_ptr = &contents[0];

void is_full(void) {
    return top == STACK_SIZE;
}

void is_empty(void) {
    return top == 0;
}

void make_empty(void) {
    top = 0;
}

void push(int value) {
    *top_ptr++ = value;
}

int pop(void) {
    return --*top_ptr;
}