#include <stdio.h>

#define N 10
#define SIZE (int) (sizeof(numbers) / sizeof(numbers[0]))

int main(void) {
    printf("Enter %d numbers: ", N);

    int numbers[N];

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("In reverse order: ");

    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }

    printf("\n");
}
