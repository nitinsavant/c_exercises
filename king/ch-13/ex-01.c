#include <stdio.h>

int main(void) {
    printf("%c", '\n');
    printf("%c", "\n"); // Tries to print a string with a character specification
    printf("%s", '\n'); // Tries to print a character with a string specification
    printf("%s", "\n");
    printf('\n'); // Tries to pass character when string parameter is required
    printf("\n");
    putchar('\n');
    putchar("\n"); // Tries to pass string when character parameter is required
    puts('\n'); // Tries to pass character when string parameter is required
    puts("\n"); // Will write two new-line characters because puts always appends a new-line
    puts("");
}