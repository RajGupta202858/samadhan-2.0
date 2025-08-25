#include <iostream>
using namespace std;

int main() {
    const int n = 5;  // number of subjects
    string subjects[n] = {"Chemistry", "Maths", "Physics", "Computer", "Engineering Drawing"};
    int marks[n];
    int total = 0;

    cout << "Enter marks for the following subjects (out of 100):\n";
    for (int i = 0; i < n; i++) {
        cout << subjects[i] << ": ";
        cin >> marks[i];
        total += marks[i];  // add to total
    }

    float average = total / (float)n;
    float percentage = (total / (float)(n * 100)) * 100;

    cout << "\n----- Student Marks Report -----" << endl;
    for (int i = 0; i < n; i++) {
        cout << subjects[i] << ": " << marks[i] << endl;
    }

    cout << "Total Marks   : " << total << " / " << n * 100 << endl;
    cout << "Average Marks : " << average << endl;
    cout << "Percentage    : " << percentage << "%" << endl;

    return 0;
}
