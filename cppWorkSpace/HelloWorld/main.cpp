/* This is a testing project template by Parvaiz Ahmad*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    typedef enum {
	red, blue, green, max = 0xffff} color;	// defeat tiny optimization
    color neg = (color)(-3);
    cout << neg << endl;

    return 0;
}
