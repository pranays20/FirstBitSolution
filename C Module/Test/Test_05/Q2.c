#include <stdio.h>

void deposit(int *balance);
void withdraw(int *balance);

void main() 
{
    int balance = 5000;  
    int choice;

    printf("Initial Balance: %d\n", balance);
    printf("\nChoose an option:\n");
    printf("1. Deposit Money\n");
    printf("2. Withdraw Money\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) 
        deposit(&balance);
    else if (choice == 2) 
        withdraw(&balance);
    else
        printf("Invalid choice!\n");

    printf("\nUpdated Balance: %d\n", balance);

}

void deposit(int *balance) 
{
    int amount;
    printf("Enter amount to deposit: ");
    scanf("%d", &amount);
    *balance = *balance + amount;
    printf("Amount deposited successfully!\n");
}

void withdraw(int *balance) 
{
    int amount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (*balance - amount < 3000) 
        printf("Can't withdraw the amount. Balance is not sufficient!\n");
    else 
	{
        *balance = *balance - amount;
        printf("Amount withdrawn successfully!\n");
    }
}
