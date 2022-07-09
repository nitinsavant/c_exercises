#include <stdio.h>


int main(void) {
    printf("Enter an expression: ");

    float result;
    scanf("%f", &result);

    char operation;
    float operand;

    while (1) {
        scanf("%c", &operation);
        if (operation == '\n') break;

        scanf("%f", &operand);

        switch (operation) {
            case '+':
                result += operand; break;
            case '-':
                result -= operand; break;
            case '*':
                result *= operand; break;
            case '/':
                result /= operand; break;
        }
    }

    printf("Value of expression: %f\n", result);
}
