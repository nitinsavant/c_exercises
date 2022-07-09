#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main(void) {
    printf("Enter message: ");

    char ch;
    int i = 0;
    char output[MAX_SIZE] = {0};

    while ((ch = getchar()) != '\n') {
        switch (toupper(ch)) {
            case 'A':
                output[i] = '4'; break;
            case 'B':
                output[i] = '8'; break;
            case 'E':
                output[i] = '3'; break;
            case 'I':
                output[i] = '1'; break;
            case 'O':
                output[i] = '0'; break;
            case 'S':
                output[i] = '5'; break;
            default:
                output[i] = ch;
        }
        i++;
    }

    printf("In B1FF-speak: ");

    i = 0;
    while ((ch = output[i]) != 0) {
        printf("%c", ch);
        i++;
    }

    printf("!!!!!!!!!!\n");
}
