#include <stdio.h>

int main(void) {
    // 9 - ((total - 1) % 10) vs. 10 - (total % 10)
    // total = -1 -> 11 vs. 11
    // total = 0 -> 10 vs. 10
    // total = 1 -> 9 vs. 9
    // total = 2 -> 8 vs. 8
}