#include <iostream>

using namespace std;

double a_penny_doubled_everyday(int days, double amount) {
     
    if(days == 1) {
        return amount;
    }
    return 2.0 * a_penny_doubled_everyday(days - 1, amount);
}

int main(int argc, char **argv)
{
	double total_amount = a_penny_doubled_everyday(4, 0.2);
    cout << total_amount << endl;
	return 0;
}
