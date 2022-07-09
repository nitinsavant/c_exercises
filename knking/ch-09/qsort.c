#include <stdio.h>

#define N 10

void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void) {
    int arr[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, N - 1);

    printf("In sorted order: ");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void quicksort(int arr[], int low, int high) {
    if (low >= high) return;
    int middle = split(arr, low, high);
    quicksort(arr, low, middle - 1);
    quicksort(arr, middle + 1, high);
}

int split(int arr[], int low, int high) {
        int e = arr[low];

        while (1) {
            while (low < high && e <= arr[high]) {
                high--;
            }

            if (low >= high) break;
            arr[low++] = arr[high];

            while (low < high && e >= arr[low]) {
                low++;
            }

            if (low >= high) break;
            arr[high--] = arr[low];
        }

        arr[low] = e;
        return low;
}
