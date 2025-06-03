#include <iostream>
using namespace std;

// Forward declaration
class Box;

// Friend function declaration
void displayLength(Box b);

// Class with private member
class Box {
private:
    int length;

public:
    // Constructor
    Box(int l) {
        length = l;
    }

    // Declare friend function inside the class
    friend void displayLength(Box b);
};

// Friend function definition
void displayLength(Box b) {
    // Accessing private member of Box
    cout << "The length of the box is: " << b.length << " units." << endl;
}

// Main function
int main() {
    Box myBox(25);  // Create an object with length 25
    displayLength(myBox);  // Call friend function

    return 0;
}

