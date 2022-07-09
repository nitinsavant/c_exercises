#include <stdio.h>

int main(void) {

    int i, n;

    printf("The program prints a table of squares.\n");
    printf("Enter number of entries in a table: ");
    scanf("%d", &n);
    getchar(); // disposes of newline character

    for (i = 1; i <= n; i++) {
        short squared = i * i;
        printf("%10d%10d\n", i, squared);

        if (i % 24 == 0) {
            printf("Press ENTER to continue...\n");
            getchar(); // waits for ENTER key; also disposes of any characters
        }
    }
}
