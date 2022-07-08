#include <string.h>

int main(void) {
    strcpy(str, "tire-bouchon"); // "tire-bouchon"
    strcpy(&str[4], "d-or-wi");  // "tired-or-wi"
    strcat(str, "red?");         // "tired-or-wired?"

}

