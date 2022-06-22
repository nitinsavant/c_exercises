#include <stdio.h>

#define SIZE 6

int find_largest_value(int a[], int n) {
    int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[max_index]) {
            max_index = i;
        }
    }

    temp = a[n];
    a[n] = a[max_index];
    a[max_index] = temp;
}

void selection_sort(int a[], int n) {
    if (n == 1) {
        return;
    }

    find_largest_value(a, n);

    selection_sort(a, n - 1);
}

int main(void) {

    int a[SIZE];
    printf("Enter a series of %d integers: ", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &a[i]);
    }

    selection_sort(a, SIZE);

    printf("Integers sorted:");
    for (int i = 0; i < SIZE; i++) {
        printf(" %d", a[i]);

    }
    printf("\n");
}
