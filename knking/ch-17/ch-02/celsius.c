#include <stdio.h>
#define FREEZING_POINT 32.0f
#define SCALING_FACTOR 5.0f/9.0f

int main(void)
{
    int tempF;
    float tempC;

    printf("Enter Fahrenheit temperature: ");
    scanf("%d", &tempF);

    tempC = (tempF - FREEZING_POINT) * SCALING_FACTOR;

    printf("Celsius equivalent: %.1f \n", tempC);

    return 0;
}