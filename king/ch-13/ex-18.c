#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool void remove_filename(char *url) {

}

int main(void) {
    char filename[] = "http://www.knking.com/index.html";
    remove_filename(filename);
    printf("%s\n", filename);
}
