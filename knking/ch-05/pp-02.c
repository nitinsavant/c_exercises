#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int hour, minute;

    bool pm = false;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour >= 12) {
        pm = true;
    }

    if (hour > 12) {
        hour -= 12;
    }

    printf("Equivalent 12-hour time: %.2d:%.2d %s\n", hour, minute, pm ? "PM" : "AM");
}


