#include <stdio.h>

int main(void) {
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    printf("Equivalent 12-hour time: ");
    if (hour >= 12) {
        if (hour == 12) {
            printf("%.2d:%.2d PM\n", hour, minute);
        } else {
            printf("%.2d:%.2d PM\n", hour - 12, minute);
        }
    } else {
        printf("%.2d:%.2d AM\n", hour, minute);
    }
}


