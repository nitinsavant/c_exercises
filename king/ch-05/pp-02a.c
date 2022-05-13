#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour >= 12) {
        if (hour == 12) {
            printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hour, minute);
        } else {
            hour -= 12;
            printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hour, minute);
        }
    } else {
        printf("Equivalent 12-hour time: %.2d:%.2d AM\n", hour, minute);
    }
}


