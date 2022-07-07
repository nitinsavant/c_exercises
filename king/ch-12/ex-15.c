#include <stdio.h>

int main(void) {
    int temperatures[7][24], i, *p;

    for (p = temperatures[i]; p < temperatures[i + 1]; p++) {
        printf("%d ", *p);
    }

    // 2nd expression in loop could also be p < temperatures[i] + 24
}
