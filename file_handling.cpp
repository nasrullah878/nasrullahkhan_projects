#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // 1. Write to a file
    ofstream outFile("example.txt");
    outFile << "Hello, world!\n";
    outFile << "This is a simple file handling example.\n";
    outFile.close();

    cout << "File written successfully.\n";

    // 2. Read the file
    ifstream inFile("example.txt");
    string line;
    cout << "\nReading file content:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    // 3. Append to the file
    ofstream appendFile("example.txt", ios::app);
    appendFile << "Appending a new line.\n";
    appendFile.close();

    cout << "\nLine appended successfully.\n";

    return 0;
}
