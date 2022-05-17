#include <stdio.h>

int main(void) {
    for (n = 0; m > 0; n++)
        m /= 2;

    for (n = 0; m > 0 && (m /= 2); n++)
        /* empty body */ ;
}
