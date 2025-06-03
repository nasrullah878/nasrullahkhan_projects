#include <iostream>
using namespace std;

class shape{ //abstract class
    public:
    virtual void display()=0;
};

class square:public shape{
    public:
    void display(){
        cout<<"Square\n";
    }
};

class triangle:public shape{
    public:
    void display(){
        cout<<"Triangle\n";
    }
};

int main() {
    square sq;
    sq.display();
    triangle tri;
    tri.display();
    return 0;
}
