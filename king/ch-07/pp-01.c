#include <stdio.h>

int main(void) {

    short i, n;

    printf("The program prints a table of squares.\n");
    printf("Enter number of entries in a table: ");
    scanf("%hd", &n);

    for (i = 1; i <= n; i++) {
        short squared = i * i;
        printf("%10d%10d\n", i, squared);
    }

    // Hmm. Directly including "i * i" as an argument to printf converts the solution to int.
    // I need to either use the '%hd' specifier to force the int to be written as a short, or
    // use "conversion during assignment" to force it to stay a 'short'

    // When using a 'short', the squared value turns "strange" at i = 182 because the value exceeds 32,768,
    // which is the max value for a 16-bit signed integer
}
