#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension) {
    while (*file_name++ != '.')
        ; // skips chars until '.'

    while (*file_name && *extension)
        if (toupper(*file_name++) != toupper(*extension++))
            return false;

    if (*file_name == *extension)
        return true;
    else
        return false;
}

int main(void) {
    printf("%d\n", test_extension("memo.txt", "TXT"));
}
