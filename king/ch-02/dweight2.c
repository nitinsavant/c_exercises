/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void) {
    int height, length, width, volume, weight;

    printf("Enter height: ");
    scanf("%d", &height);

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter width: ");
    scanf("%d", &width);

    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensional Weight: %d\n", weight);
    return 0;
}