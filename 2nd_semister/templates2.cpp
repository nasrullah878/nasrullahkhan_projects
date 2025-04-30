#include <iostream>
using namespace std;

int main() {
    try {
        int a, b;
        cout << "Enter values for a and b: ";
        cin >> a >> b;

        if (b == 0) {
            throw "Cannot divide by zero!";
        }

        int remainder = a % b;  // Use modulus operator
        cout << "Remainder: " << remainder << endl;
    }
    catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    return 0;
}
