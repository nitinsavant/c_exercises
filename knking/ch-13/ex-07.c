#include <string.h>

int main(void) {
    *str = 0; // Sets the value of the first character to the integer 0 (i.e. null character), so any subsequent characters are now ignored.

    str[0] = '\0'; // Sets the value of the first character to the null character, so any subsequent characters are not ignored.

    strcpy(str, ""); // Copies empty string into string; empty string is just "\0"

    strcat(str, ""); // Appends empty string to the existing string. This is the different one.

}

