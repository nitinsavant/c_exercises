#include <stdio.h>

void remove_filename(char *url) {
    char *p = url;

    while (*url) {
        if (*url == '/') {
            p = url;
        }
        url++;
    }

    *p = '\0';
}

int main(void) {
    char filename[] = "http://www.knking.com/index.html";
    remove_filename(filename);
    printf("%s\n", filename);
}
