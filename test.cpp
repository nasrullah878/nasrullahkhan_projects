#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string text;

    // Get input from user
    cout << "Enter a line of text: ";
    getline(cin, text);

    // Write to file
    ofstream outFile("data.txt", ios::app);
    outFile << text;
    outFile.close();

    // Read from file
    ifstream inFile("data.txt");
    string readText;
    getline(inFile, readText);
    inFile.close();

    // Output the text read from file
    cout << "Text read from file: " << readText << endl;

    return 0;
}
