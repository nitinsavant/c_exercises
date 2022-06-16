#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10

int main(void) {
    srand(time(NULL));
    char a[SIZE][SIZE] = {0};

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            a[i][j] = '.';
        }
    }

    a[0][0] = 'A';

    int i = 0, j = 0;

    for (char ch = 'B'; ch <= 'Z'; ch++) {

        int next_i, next_j;

        int attempt = 0;

        do {
            int direction = rand() % 4;
            switch (direction) {
                case 0:
                    next_j = j - 1;
                    next_i = i;
                    break;
                case 1:
                    next_j = j + 1;
                    next_i = i;
                    break;
                case 2:
                    next_j = j;
                    next_i = i - 1;
                    break;
                case 3:
                    next_j = j;
                    next_i = i + 1;
                    break;
            }
            if (attempt > 20) {
                goto print;
            }
            attempt++;
        } while ((a[next_i][next_j] != '.') || (next_i < 0) || (next_i >= 10) || (next_j < 0) || (next_j >= 10));

        i = next_i;
        j = next_j;

        a[i][j] = ch;
    }

    printf("\n");

    print: for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%c  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

