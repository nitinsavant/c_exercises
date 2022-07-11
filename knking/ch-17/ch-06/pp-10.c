#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int earliestM, earliestD, earliestY = 0;

    while (true) {
        printf("Enter a date (mm/dd/yy): ");

        int m, d, y;
        scanf("%d/%d/%d", &m, &d, &y);

        if (y == 0 && m == 0 && d == 0)
            break;

        if (!earliestY) {
            earliestY = y;
            earliestM = m;
            earliestD = d;
            continue;
        }

        if ((y < earliestY) ||
            (y == earliestY && m < earliestM) ||
            (y == earliestY && m == earliestM && d < earliestD)) {

            earliestY = y;
            earliestM = m;
            earliestD = d;
        }
    }

    printf("%d/%d/%.2d is the earliest date\n", earliestM, earliestD, earliestY);
}



