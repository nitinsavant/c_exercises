#include <string.h>

int main(void) {
    strcpy(s1, "computer");    // s1 = "computer"
    strcpy(s2, "science");     // s2 = "science"
    if (strcmp(s1, s2) < 0)
        strcat(s1, s2);        // s1 = "computerscience"
    else
        strcat(s2, s1);
    s1[strlen(s1)-6] = '\0';   // s1 = "computers"
}

