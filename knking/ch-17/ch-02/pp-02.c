#include <stdio.h>
#include <math.h>

int main(void) {
    int r = 10;
    float volume;

    volume = 4.0f / 3.0f * M_PI * r * r * r;

    printf("Volume: %.2f\n", volume);
}

