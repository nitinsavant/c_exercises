#include <stdio.h>

int main() {
    struct { int x,  y; } x;
    struct { int x,  y; } y;

    // Yes, they are legal on an individual basis, and  both declarations could appear in a program.
    // The scope inside the struct definition is distinct from the scope where the structure tag is defined.

}

