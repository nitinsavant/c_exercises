#include <stdio.h>

int main(void) {
    char *p = "abc";

    putchar(p);  // Ilegal; passes a string to a character parameter

    putchar(*p); // Legal; output is "a"

    puts(p);     // Legal; output is "abc\n"

    puts(*p);    // Illegal; passes character to string parameter
}