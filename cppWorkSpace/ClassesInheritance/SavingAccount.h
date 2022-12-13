#ifndef __SAVINGACCOUNT_H__
#define __SAVINGACCOUNT_H__
#include "Account.h"

class savingAccount : public Account
{
private:
    /* data */
public:
    void deposit(double amount);
    void withdraw(double amount);
    savingAccount(/* args */);
    ~savingAccount();
};

#endif // !__SAVINGACCOUNT_H__
