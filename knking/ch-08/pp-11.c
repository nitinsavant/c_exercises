#include <stdio.h>

int main(void) {
    char ch;

    int output[15] = {0};

    printf("Enter phone number: ");

    int i = 0;

    while ((ch = getchar()) != '\n') {

       switch (ch) {
           case 'A': case 'B': case 'C':
               output[i] = '2'; break;
           case 'D': case 'E': case 'F':
               output[i] = '3'; break;
           case 'G': case 'H': case 'I':
               output[i] = '4'; break;
           case 'J': case 'K': case 'L':
               output[i] = '5'; break;
           case 'M': case 'N': case 'O':
               output[i] = '6'; break;
           case 'P': case 'R': case 'S':
               output[i] = '7'; break;
           case 'T': case 'U': case 'V':
               output[i] = '8'; break;
           case 'W': case 'X': case 'Y':
               output[i] = '9'; break;
           default:
               output[i] = ch;
           }
           i++;
    }

    printf("In numeric form: ");

    i = 0;

    while ((ch = output[i]) != 0) {
        putchar(ch);
        i++;
    }

    printf("\n");
}
