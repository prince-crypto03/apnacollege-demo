// Task 45: Percentage calculator (5 subjects)
#include <iostream>
using namespace std;

int main() {
    float sub1, sub2, sub3, sub4, sub5, total, percentage;

    cout << "Enter marks of subject 1: ";
    cin >> sub1;

    cout << "Enter marks of subject 2: ";
    cin >> sub2;

    cout << "Enter marks of subject 3: ";
    cin >> sub3;

    cout << "Enter marks of subject 4: ";
    cin >> sub4;

    cout << "Enter marks of subject 5: ";
    cin >> sub5;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500) * 100;

    cout << "Total marks = " << total << " / 500" << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}
