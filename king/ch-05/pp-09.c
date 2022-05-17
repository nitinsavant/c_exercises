#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int m1, d1, y1, m2, d2, y2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    bool isFirstEarliest = false;

    if (y1 < y2) {
        isFirstEarliest = true;
    } else if (y1 == y2) {
        if (m1 < m2) {
            isFirstEarliest = true;
        } else if (m1 == m2) {
            if (d1 < d2) {
                isFirstEarliest = true;
            }
        }
    }

    if (isFirstEarliest) {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m1, d1, y1, m2, d2, y2);
    } else {
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", m2, d2, y2, m1, d1, y1);
    }
}



