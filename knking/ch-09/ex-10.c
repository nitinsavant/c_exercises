#include <stdio.h>

int largest_element(int[], int);
double average(int[], int);
int positives(int[], int);

int main(void) {
    int a[] = {1, -3, 34, 89};


    printf("Largest element: %d\n", largest_element(a, 4));
    printf("Average value: %f\n", average(a, 4));
    printf("Positive elements: %d\n", positives(a, 4));
}

int largest_element(int a[], int n) {
    int largest = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    return largest;
}

double average(int a[], int n) {
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum / n;
}

int positives(int a[], int n) {
    int positives = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            positives++;
        }
    }

    return positives;
}
