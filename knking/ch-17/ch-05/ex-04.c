#include <stdio.h>

int main(void) {
    int i, j;

    printf("Enter a value for i: ");
    scanf("%d", &i);
    printf("Enter a value for j: ");
    scanf("%d", &j);

    printf("Result: %d\n", i < j ? -1 : i > j);

    // Better solution: (i > j) - (i < j)
}

