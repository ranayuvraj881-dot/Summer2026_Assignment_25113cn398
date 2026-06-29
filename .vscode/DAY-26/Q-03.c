//write a program to create atm simulation program
#include <stdio.h>
int main() {
    int pin, enteredPin, choice;
    float balance = 1000.0, amount;

    printf("Enter your ATM PIN: ");
    scanf("%d", &enteredPin);

    // Assuming the correct PIN is 1234
    pin = 1234;

    if (enteredPin != pin) {
        printf("Incorrect PIN. Access denied.\n");
        return 0;
    }

    do {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: $");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Amount deposited successfully. New balance: $%.2f\n", balance);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: $");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Amount withdrawn successfully. New balance: $%.2f\n", balance);
                } else {
                    printf("Invalid withdrawal amount or insufficient funds.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}