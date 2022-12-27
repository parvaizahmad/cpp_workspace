#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
    int change_amount;
    const int dollar_amount {100};
    const int quarter_amount {25};
    const int dime_amount {10};
    const int nickle_amount {5};
	cout << "Enter an amount in cents: ";
	cin >> change_amount;
    int dollar {}, quarter {}, dime {}, nickle {}, penny {};
    int remaining {};
    dollar =  change_amount/dollar_amount;
    remaining = change_amount - (dollar_amount * dollar);
    
    quarter = remaining/quarter_amount;
    remaining = remaining - (quarter_amount * quarter);
    
    dime = remaining / dime_amount;
    remaining = remaining - (dime_amount * dime);
    
    nickle = remaining / nickle_amount;
    remaining = remaining - (nickle_amount * nickle);
    
    penny = remaining;
    
    
    cout << "You can provide this change as follows: " << endl;
    cout << "dollars: " << dollar << endl;
    cout << "quarter: " << quarter << endl;
    cout << "dime: " << dime << endl;
    cout << "nickle: " << nickle << endl;
    cout << "penny: " << penny << endl;
    int amount = 100;
    amount += amount * 2;
    cout << amount;
    return 0;
}
