#include <iostream>
using namespace std;

template <class T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }

    T multiply(T a, T b) {
        return a * b;
    }
};

int main() {
    Calculator<int> intCalc;
    Calculator<float> floatCalc;

    cout << "Int Add: " << intCalc.add(3, 4) << endl;
    cout << "Float Multiply: " << floatCalc.multiply(2.5f, 4.0f) << endl;

    return 0;
}
