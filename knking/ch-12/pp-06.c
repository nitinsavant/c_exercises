#include <stdio.h>

#define N 10

void quicksort(int *low, int *high);
int *split(int *low, int *high);

int main(void) {
    int arr[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, arr + N - 1);

    printf("In sorted order: ");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void quicksort(int *low, int *high) {
    if (low >= high) return;
    int *middle = split(low, high);
    quicksort(low, middle - 1);
    quicksort(middle + 1, high);
}

int *split(int *low, int *high) {
        int e = *low;

        while (1) {
            while (low < high && e <= *high) {
                high--;
            }

            if (low >= high) break;
            *low++ = *high;

            while (low < high && e >= *low) {
                low++;
            }

            if (low >= high) break;
            *high-- = *low;
        }

        *low = e;
        return low;
}
