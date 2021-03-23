#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{

    int amount, balance = 0;
    int choice;

    do
    {
        printf("\n\n");
        printf("***********************************\n");
        printf("*********** ATM MACHINE *********** \n");
        printf("***********************************\n\n");

        printf("\t1. View balance\n");
        printf("\t2. Deposit\n");
        printf("\t3. Withdrawal\n");
        printf("\t4. Quit\n\n");
        printf("Enter your selection:\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("your balance is : %d$.\n", balance);
            break;
        case 2:
            printf("How much is the deposit?\n");
            scanf("%d", &amount);
            balance += amount;
            break;
        case 3:
            printf("How much is the withdrawal?\n");
            scanf("%d", &amount);
            if (balance - amount >= 0)
            {
                balance -= amount;
            }
            else
            {
                printf("Insufficient funds.\n");
            }
            break;

        default:
            break;
        }
    } while (choice != 4);

    return 0;
}