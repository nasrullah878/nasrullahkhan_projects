#include <iostream>
using namespace std;

class Animal {
public:
    // A normal virtual function with default behavior
    virtual void sound() {
        cout << "Some animal sound" << endl;
    }
};
class Dog : public Animal {
public:
    // Dog wants to override the sound
    void sound() override {
        cout << "Woof!" << endl;
    }
};

class Snake : public Animal {
public:
   void sound() override {
        cout << "seeek" << endl;
  // Snake does NOT override sound()
}
    // It will use the base class's default sound()
};
int main() {
 Animal* ptr;
    Dog d;
   ptr=&d;
    Snake s;

    d.sound();  // Output: Woof!
    s.sound();  // Output: seeks
}
