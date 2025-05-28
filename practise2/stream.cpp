#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Write to file
    ofstream fout("example.txt");
    fout << "Hello, file!" << endl;
    fout.close();

    // Read from file
    ifstream fin("example.txt");
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();
}
