#include <stdio.h>
#include <stdbool.h>

int main(void) {
    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");

    int command;
    float balance = 0;

    while (true) {
        float amount = 0;

        printf("Enter command: ");
        scanf("%d", &command);

        switch (command) {
            case 0:
                balance = 0;
                break;
            case 1:
                printf("Enter amount of credit: ");
                scanf("%f", &amount);
                balance += amount;
                break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f", &amount);
                balance -= amount;
                break;
            case 3:
                printf("Current balance: $%.2f\n", balance);
                break;
            case 4:
                return 0;
        }
    }

}
