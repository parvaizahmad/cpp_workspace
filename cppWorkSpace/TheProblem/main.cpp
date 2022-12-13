/* This is a testing project template by Parvaiz Ahmad*/
#include <iostream>
class Base {
public:
    int a = 0;
    const char* message = "Hello there";
    void say_hello() const {
        std::cout << "Hello I'm base class" << std::endl;
    }
};

class Derived : public Base {
public:
    void say_hello() const {
        std::cout << "I am derived class" << std::endl;
    }
};

void greeting(Base &obj) {
    std::cout << "Greeting : ";
    obj.say_hello();
}
int main()
{
    Base b;
    b.say_hello();
    
    Derived d;
    d.say_hello();
    
    greeting(b);
    greeting(d);
    return 0;    
}

