#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest) {
    if (*a > *(a+1)) {
        *largest = *a;
        *second_largest = *(a + 1);
    } else {
        *second_largest = *a;
        *largest = *(a + 1);
    }

    int const *p;

    for (p = a + 2; p < a + n; p++) {
        if (*p > *largest) {
            *second_largest = *largest;
            *largest = *p;
        } else if (*p > *second_largest) {
            *second_largest = *p;
        }
    }
}

int main(void) {
    int a[] = {1, 2, 3, 4, 5};

    int largest, second_largest;

    printf("%d\n", largest);
    printf("%d\n", second_largest);

    find_two_largest(a, 5, &largest, &second_largest);

    printf("%d\n", largest);
    printf("%d\n", second_largest);

}
