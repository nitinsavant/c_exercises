#include <stdio.h>
#include <ctype.h>

void capitalize_a(char str[]) {

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void capitalize_b(char *str) {

    for (; *str != '\0'; str++) {
        *str = toupper(*str);
    }
}

int main(void) {
    char str[] = "abc";
    capitalize_b(str);
    printf("%s\n", str);
}
