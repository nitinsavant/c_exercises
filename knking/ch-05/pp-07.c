#include <stdio.h>

int main(void) {
    int i1, i2, i3, i4;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &i1, &i2, &i3, &i4);

    int smallest = i1;

    if (i1 > i2) {
        smallest = i2;
        if (i2 > i3) {
            smallest = i3;
            if (i3 > i4) {
                smallest = i4;
            }
        }
    } else {
        if (i1 > i3) {
            smallest = i3;
            if (i3 > i4) {
                smallest = i4;
            }
        } else {
            if (i1 > i4) {
                smallest = i4;
            }
        }
    }

    printf("Smallest: %d\n", smallest);
}


