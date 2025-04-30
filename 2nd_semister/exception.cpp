#include <iostream>
using namespace std;

int main() {
    try {
        // 1. Code that might throw an exception
        int a , b;
        cout<<"enter values for a and b :";
        cin>>a>>b;
        if (b == 0) {
            throw "Cannot divide by zero!";
        }

        int result = a / b;
        cout << "Result: " << result << endl;
    }
    catch (const char* error) {
        // 2. Handle the exception
        cout << "Error: " << error << endl;
    }

    // 3. Continue normally
  //  cout << "Program continues..." << endl;

    return 0;
}
