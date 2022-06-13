#include <stdio.h>

#define N 5

int main(void) {

    printf("Enter %d-digit number: ", N);

    int i, arr[N];

    _Bool repeated = 0;

    for (i = 0; i < N; i++) {
        scanf("%1d", &arr[i]);

        if (i > 1) {
            for (int j = i - 1; j >= 0; j--) {
                if (arr[j] == arr[i]) {
                    repeated = 1;
                    break;
                }
            }
        }

        if (repeated) {
            break;
        }
    }

    if (repeated) {
        printf("Repeated digit\n");
    } else {
        printf("No repeated digit\n");
    }
}

