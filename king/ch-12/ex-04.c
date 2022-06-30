#include <stdbool.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int *top_ptr = &contents[0];

bool is_full(void) {
    return top_ptr == &contents[STACK_SIZE];
}

bool is_empty(void) {
    return top_ptr == &contents[0];
}

void make_empty(void) {
    top_ptr = &contents[0];
}

void push(int value) {
    *top_ptr++ = value;
}

int pop(void) {
    return --*top_ptr;
}
