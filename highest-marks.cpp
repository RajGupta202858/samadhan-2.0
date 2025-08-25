#include <iostream>
using namespace std;

int main() {
    const int n = 5;  // number of subjects
    string subjects[n] = {"Chemistry", "Maths", "Physics", "Computer", "Engineering Drawing"};
    int marks[n];

    // Input marks for each subject
    cout << "Enter marks for the following subjects:\n";
    for (int i = 0; i < n; i++) {
        cout << subjects[i] << ": ";
        cin >> marks[i];
    }

    // Find highest marks
    int highest = marks[0];
    string topSubject = subjects[0];56
    23
    

    for (int i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
            topSubject = subjects[i];
        }
    }

    cout << "\nThe highest marks are in " << topSubject << " = " << highest << endl;

    return 0;
}
