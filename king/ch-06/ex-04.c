#include <stdio.h>

int main(void) {
//    (a) for (i = 0; i < 10; i++)
//    (b) for (i = 0; i < 10; ++i)
//    (c) for (i = 0; i++ < 10; )

// A and B are equivalent. i++ vs. ++i doesn't matter because the return value of that expression isn't used
// C is different because it skips the iteration when i = 0.
}
