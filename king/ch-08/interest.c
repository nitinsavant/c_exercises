#include <stdio.h>

#define INITIAL_BALANCE 100.0
#define SIZE_VALUE ((int) (sizeof(values) / sizeof(values[0])))

int main(void) {
    int rate, numYears;

    printf("Enter interest rate: ");
    scanf("%d", &rate);

    printf("Enter number of years: ");
    scanf("%d", &numYears);

    double values[] = {INITIAL_BALANCE, INITIAL_BALANCE, INITIAL_BALANCE, INITIAL_BALANCE, INITIAL_BALANCE};

    printf("\nYears");
    for (int i = rate; i < (rate + SIZE_VALUE); i++) {
        printf("%6d%%", i);
    }

    printf("\n");

    for (int year = 1; year <= numYears; year++) {
        printf("%3d   ", year);
        for (int j = 0, r = rate; r < rate + 5; j++, r++) {
            values[j] *= (1 + r/100.0);
            printf("%7.2f", values[j]);
        }
        printf("\n");
    }

    printf("\n");
}
