#include <iostream>
#include "headerfile.cpp"
//using namespace std;
int main(){ 
Calculator calc;
    std::cout << "Add: " << calc.add(54, 5) << std::endl;
    std::cout << "Multiply: " << calc.multiply(554, 5) << std::endl;
    return 0;
};
