
#include <stdio.h>

int login(void)
{
    int pin;
    int attempts = 0;
    int correctPin = 5055;

    while (attempts < 3)
    {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin)
        {
            printf("Login successful.\n");
            return 1;
        }

        printf("Incorrect PIN.\n");
        attempts++;
    }

    printf("Too many attempts. Access denied.\n");
    return 0;
}

void checkBalance(float balance)
{
    printf("Your balance is: %.2f\n", balance);
}

float deposit(float balance)
{
    float amount;

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount > 0)
    {
        balance = balance + amount;
        printf("Deposit successful.\n");
    }
    else
    {
        printf("Amount must be positive.\n");
    }

    return balance;
}

float withdraw(float balance)
{
    float amount;

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Amount must be positive.\n");
    }
    else if (amount > balance)
    {
        printf("You do not have enough money.\n");
    }
    else
    {
        balance = balance - amount;
        printf("Withdrawal successful.\n");
    }

    return balance;
}

int main(void)
{
    int choice;
    float balance = 50000.00;

    if (login() == 0)
    {
        return 0;
    }

    do
    {
        printf("\nATM Menu\n");
        printf("1. Balance Inquiry\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            checkBalance(balance);
        }
        else if (choice == 2)
        {
            balance = deposit(balance);
        }
        else if (choice == 3)
        {
            balance = withdraw(balance);
        }
        else if (choice == 4)
        {
            printf("Thank you for using the ATM.\n");
        }
        else
        {
            printf("Invalid choice. Try again.\n");
        }

    } while (choice != 4);

    return 0;
}
