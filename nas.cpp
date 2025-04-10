#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string text;

    // Get input from user
    cout << "Enter a line of text: ";
    getline(cin, text);

    // Append to file
    ofstream outFile("data.txt", ios::app);
    outFile << text << endl;
    outFile.close();

    // Read from file
    ifstream inFile("data.txt");
    string line;
    cout << "\nContent of file:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
