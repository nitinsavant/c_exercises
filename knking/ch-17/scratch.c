#include <stdio.h>
#include <string.h>

int main() {
    enum suit {CLUBS = 1, DIAMONDS = 2, HEARTS = 3, SPADES = 4};

    enum suit s1 = SPADES;

    printf("%d\n", s1--);   // prints "4"
    printf("%d\n", s1);     // prints "3"

}

