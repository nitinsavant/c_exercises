#include <stdio.h>

int main(void) {
    printf("char: %lu bits\n", sizeof(char) * 8);
    printf("short: %lu bits\n", sizeof(short) * 8);
    printf("int: %lu bits\n", sizeof(int) * 8);
    printf("long: %lu bits\n", sizeof(long) * 8);

    typedef char Int8;

    typedef short Int16;

    typedef int Int32;

    typedef long Int64;
}
