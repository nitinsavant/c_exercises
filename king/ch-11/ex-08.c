void *find_largest(int a[], int n) {
    int *largest = &a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > *largest) {
            largest = &a[i];
        }
    }

    return largest;
}
