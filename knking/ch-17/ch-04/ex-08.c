//
// Created by Nitin Savant on 4/25/22.
//

#include <stdio.h>

int main(void) {

    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d1);

    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &d2, &d3, &d4, &d5, &d6);

    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &d7, &d8, &d9, &d10, &d11);

    int first_sum = d1 + d3 + d5 + d7 + d9 + d11;
    int second_sum = d2 + d4 + d6 + d8 + d10;

    int total = ((first_sum * 3) + second_sum) ;
    int result = (10 - (total % 10)) % 10;

    printf("Check digit: %d\n", result);
}


