#include <stdio.h>
#include <math.h>

int main(void) {
    float r, volume;

    printf("Enter radius: ");
    scanf("%f", &r);

    volume = 4.0f / 3.0f * M_PI * r * r * r;

    printf("Volume: %.2f\n", volume);
}

