#include <stdio.h>
#include "ex-11.c"

#define DAYS_IN_WEEK
#define HOURS_IN_DAY

int main(void) {
    int temperatures[DAYS_IN_WEEK][HOURS_IN_DAY] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int (*p)[HOURS_IN_DAY], i = 0;

    for (p = temperatures; p < temperatures + DAYS_IN_WEEK; p++) {
        printf("Day %d: %d\n", ++i, find_largest(p[0], HOURS_IN_DAY));
    }

}
