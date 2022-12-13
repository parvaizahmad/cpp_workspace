#include "savingAccount.h"
#include <iostream>

savingAccount::savingAccount(/* args */)
{
}

savingAccount::~savingAccount()
{
}

void savingAccount::deposit(double amount)
{
    std::cout << "Saving account deposit called with amount " << amount << std::endl;
}

void savingAccount::withdraw(double amount)
{
    std::cout << "Saving account withdraw called with amount " << amount << std::endl;
}