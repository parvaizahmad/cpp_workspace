#include "Account.h"
#include <iostream>

Account::Account()
{
}

Account::~Account()
{
}

void Account::deposit(double amount)
{
    std::cout << "Account deposit called with amount " << amount << std::endl;
}

void Account::withdraw(double amount)
{
    std::cout << "Account withdraw call with amount " << amount << std::endl;
}