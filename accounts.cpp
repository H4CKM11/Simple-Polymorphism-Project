#include <iostream>
#include "accounts.h"


accounts::~accounts()
{
    std::cout << "Accounts destructor called \n";
}

checkingAccount::checkingAccount()
{
    totalAmount = 500;
}

void checkingAccount::withdraw() 
{
    std::cout << "Checking Account Withdraw Called" << std::endl;
}

void checkingAccount::checkBalance()
{
    std::cout << this->totalAmount << std::endl;
}

checkingAccount::~checkingAccount()
{
    std::cout << "Checking destructor called." << std:: endl;
}

savingsAccount::savingsAccount()
{
    totalAmount = 1000;
}

void savingsAccount::withdraw()
{
    std::cout << "Savings Withdraw Called \n";
}

void savingsAccount::checkBalance()
{
    std::cout << this->totalAmount << std::endl;
}

savingsAccount::~savingsAccount()
{
    std::cout << "Savings destructor called \n";
}

trustAccount::trustAccount()
{
    totalAmount = 2000;
}

void trustAccount::withdraw()
{
    std::cout << "Trust withdraw called \n";
}

void trustAccount::checkBalance()
{
    std::cout << this->totalAmount << std::endl;
}

trustAccount::~trustAccount()
{
    std::cout << "Trust destructor Called \n";
}
