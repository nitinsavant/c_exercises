#include <stdio.h>

int main(void) {
    char c = '\1';
    short s = 2;
    int i = -3;
    long m = 5;
    float f = 6.5;
    double d = 7.5;

    printf("%d\n", c * i); // -3; int
    printf("%ld\n", s + m); // 7; long
    printf("%f\n", f / c); // 6.5; float
    printf("%f\n", d / s); // 3.75; double
    printf("%f\n", f - d); // -1.0; double
    printf("%d\n", (int) f); // 6; int
}

