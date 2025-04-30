#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("mk.txt"); // Open file for reading

   if (!file.is_open()) {
     cout << "Failed to open mk.txt" << endl;
   return 1;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close(); // Close the file when done
    return 0;
}
