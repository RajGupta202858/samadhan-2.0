#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string rollNo;
    string dob;
    string gender;
    string grade;
    string department;

public:
    // Function to take input
    void inputDetails() {
        cin.ignore(); // clear buffer in case of leftover newline
        cout << "Enter Full Name: ";
        getline(cin, name);

        cout << "Enter Roll Number / Student ID: ";
        getline(cin, rollNo);

        cout << "Enter Date of Birth (DD/MM/YYYY): ";
        getline(cin, dob);

        cout << "Enter Gender: ";
        getline(cin, gender);

        cout << "Enter Class / Grade / Year: ";
        getline(cin, grade);

        cout << "Enter Section / Department: ";
        getline(cin, department);
    }

    // Function to print student details
    void printDetails() {
        cout << "\n----- Student Details ----- " << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Date of Birth : " << dob << endl;
        cout << "Gender     : " << gender << endl;
        cout << "Class/Year : " << grade << endl;
        cout << "Department : " << department << endl;
    }
};

int main() {
    Student s1;

    cout << "Enter Student Details: press E N T E R \n";
    s1.inputDetails();

    cout << "\nDisplaying Student Information:\n";
    s1.printDetails();

    return 0;
}