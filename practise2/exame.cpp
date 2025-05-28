#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base show\n"; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived show\n"; }
};

int main() {
    Base* ptr ;
    Derived d;
    ptr=&d;
    ptr->show();  // Calls Derived's show() due to virtual function
//    delete ptr;
}
