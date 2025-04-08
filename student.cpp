#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void addStudent() {
    ofstream file("students.txt", ios::app); // Open file in append mode
    string name;
    int rollNo, marks;
    
    cout << "Enter student's name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter marks: ";
    cin >> marks;
    
    file << name << "," << rollNo << "," << marks << endl;
    file.close();
    cout << "Student record added successfully!\n";
}

void displayStudents() {
    ifstream file("students.txt");
    string line;
    
    cout << "\n--- Student Records ---\n";
    if (!file) {
        cout << "No student records found!\n";
        return;
    }
    
    while (getline(file, line)) {
        size_t pos1 = line.find(",");
        size_t pos2 = line.find(",", pos1 + 1);
        
        string name = line.substr(0, pos1);
        string rollNo = line.substr(pos1 + 1, pos2 - pos1 - 1);
        string marks = line.substr(pos2 + 1);
        
        cout << "Name: " << name << ", Roll No: " << rollNo << ", Marks: " << marks << endl;
    }
    file.close();
}

void searchStudent() {
    ifstream file("students.txt");
    string line, searchRollNo;
    bool found = false;
    
    cout << "Enter roll number to search: ";
    cin >> searchRollNo;
    
    if (!file) {
        cout << "No student records found!\n";
        return;
    }
    
    while (getline(file, line)) {
        size_t pos1 = line.find(",");
        size_t pos2 = line.find(",", pos1 + 1);
        
        string name = line.substr(0, pos1);
        string rollNo = line.substr(pos1 + 1, pos2 - pos1 - 1);
        string marks = line.substr(pos2 + 1);
        
        if (rollNo == searchRollNo) {
            cout << "\nRecord Found: Name: " << name << ", Roll No: " << rollNo << ", Marks: " << marks << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student not found!\n";
    }
    
    file.close();
}

int main() {
    int choice;
    
    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                cout << "Exiting Program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    
    return 0;
}
