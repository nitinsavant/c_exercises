#include <stdio.h>

int main(void) {
    int i = 1;
    int *p = &i;

    printf("%d\n", *p);    // (a) integer i
    printf("%p\n", &p);    // (b) address of pointer p
    printf("%p\n", *&p);   // (c) pointer p
    printf("%p\n", &*p);   // (d) pointer p
//    printf("%d\n", *i);  // (e) cannot use indirection because i isn't a pointer
    printf("%p\n", &i);    // (f) address of i; equivalent to pointer p
    printf("%d\n", *&i);   // (g) integer i
//    printf("%d\n", &*i); // (h) cannot use indirection because i isn't a pointer
}
