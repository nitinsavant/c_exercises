/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void) {
    int height = 8, length = 12, width = 10;
    printf("Dimensional Weight: %d\n", (height * length * width + 165) / 166);
    return 0;
}
