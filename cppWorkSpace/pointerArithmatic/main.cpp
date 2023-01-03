#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int scores[] {12, 14, 23, 77, 53, 29, 58};
    int *scr_ptr = scores;
	while(*scr_ptr != 58)
    {
        cout << *scr_ptr << endl;
        scr_ptr++;
    }
    return 0;
}
