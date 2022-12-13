#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char **argv)
{
    char c;
    c = toupper('a');
    cout << c << endl;
    auto tempVar = 13;
    if(tempVar != 10) {
        std::cout << "not equal to 10" << std::endl;
    }
    std::cout << tempVar << std::endl;
    return 0;
}
