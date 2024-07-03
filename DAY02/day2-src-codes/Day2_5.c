#include<stdio.h>

int balance; //global variable declration
 // intialized to zero 

//function declararion
void checkBalance();
void deposit(int amount);
void withdraw(int amount);

int main(void)
{
    checkBalance();
    deposit(2000);
    deposit(2000);
    withdraw(1000);

    return 0;
}

void checkBalance()
{
    printf("\n Balance = %d",balance);
}
void deposit(int amount)
{
    balance = balance + amount;
    checkBalance();
}
void withdraw(int amount)
{
    balance = balance - amount;
    checkBalance();
}