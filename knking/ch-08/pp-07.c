#include <stdio.h>

int main(void) {

    int row_totals[5] = {0};
    int col_totals[5] = {0};

    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);

        for (int j = 0; j < 5; j++) {
            int val;
            scanf("%d", &val);
            row_totals[i] += val;
            col_totals[j] += val;
        }
    }

    printf("\n");
    printf("Row totals: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", row_totals[i]);
    }
    printf("\n");

    printf("Col totals: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", col_totals[i]);
    }
    printf("\n");
}

