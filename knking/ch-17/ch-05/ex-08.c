#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int age;

    printf("Enter an age: ");
    scanf("%d", &age);

    bool teenager = age < 13 ? false : age <= 19;

    printf("Teenager: %d\n", teenager);

    // Simpler solution: teenager = age >= 13 && age <= 19
}


