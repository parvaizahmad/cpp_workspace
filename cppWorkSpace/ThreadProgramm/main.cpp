#include <iostream>
#include <thread>
#include <string>
using namespace std;

void hello(string str) {
    std::cout << str << std::endl;
}

int main(int argc, char **argv)
{
    thread t {hello, "hi there"};
    t.join();
	return 0;
}
