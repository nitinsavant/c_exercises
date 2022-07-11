#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension) {

    while (*file_name && *file_name++ != '.')
        ; // skips characters before '.'

    strcpy(extension, file_name);
}

int main(void) {
    char *file_name = "memo.txt";
    char extension[10];
    get_extension(file_name, extension);
    printf("%s\n", extension);
}
