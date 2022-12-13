#include "Account.h"
#include "savingAccount.h"
#include <iostream>

int main(int argc, const char **argv)
{
    Account acc{};
    acc.deposit(1000);
    acc.withdraw(500);

    std::cout << std::endl;

    savingAccount saveAcc{};
    saveAcc.deposit(2000);
    saveAcc.withdraw(1000);

    std::cout << std::endl;

    return 0;
}