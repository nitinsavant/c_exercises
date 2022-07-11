#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {
    bool in_hand[4][13] = { false };
    int num_cards;

    const char cards[] = { '2', '3', '4', '5', '6', '7', '8', '9', '0', 'j', 'q', 'k', 'a' };
    const char suits[] = {'c', 'd', 'h', 's'};

    srand(time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand:");

    for (int i = 0; i < num_cards; i++) {
        int rand_card, rand_suit;

        do {
            rand_suit = rand() % 4;
            rand_card = rand() % 13;
        } while (in_hand[rand_card][rand_suit]);

        in_hand[rand_card][rand_suit] = true;

        char card = cards[rand_card];
        char suit = suits[rand_suit];

        if (card == '0') {
            printf("1%c%c ", card, suit);
        } else {
            printf(" %c%c", card, suit);
        }
    }

    printf("\n");
}
