int main(void) {
    int a[5];
    int *low = a, *high = a + 4;

    // int *middle =  (low + high) / 2;
    // Adding pointers is not a legal operation of pointer arithmetic

    int *middle = (high - low) / 2 + low;
}
