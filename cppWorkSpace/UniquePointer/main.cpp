/* This is a testing project template by Parvaiz Ahmad*/
#include <iostream>
#include <memory>
using namespace std;
int main()
{   
    std::shared_ptr<int> shared_ptr1 = std::make_shared<int> (200);
	std::shared_ptr<int> share_ptr2;
	std::cout << "Use count : " << shared_ptr1.use_count() << std::endl;
	share_ptr2 = shared_ptr1;
	std::cout << "Use count 1: " << shared_ptr1.use_count() << std::endl;
	std::cout << "Use count : " << share_ptr2.use_count() << std::endl;
	std::unique_ptr<int> ptr = std::make_unique<int> (100);
	std::cout << "The value of pointer : " << ptr.get() << std::endl;
	std::cout << "The dereferenced value of pointer: " << *ptr << std::endl;
    
    return 0;    
}

