#include <stdio.h>

int main(void) {
    int i = 1;
    int *p = &i, *q = &i;

    p = i;   // (a) assigning p to an integer; illegal
    *p = &i; // (b) assigning i to be the address of i; illegal
    &p = q;  // (c) can't change the address of a pointer; illegal
    p = &q;  // (d) assigning p to point to q; illegal
    p = *&q; // (e) assigning p to point to q; legal
    p = q;   // (f) assigning p to point to whatever q points to; legal
    p = *q;  // (g) assigning p to point to an integer; illegal
    *p = q;  // (h) assigning i to be the address q points to; illegal
    *p = *q; // (i) assigning i to be the value that q points to; legal
}
