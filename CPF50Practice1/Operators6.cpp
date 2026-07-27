// Task 31: Check leap year using logical operators
#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    // Leap year: divisible by 400, OR (divisible by 4 AND not by 100)
    bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    if (isLeap) {
        cout << year << " is a leap year" << endl;
    } else {
        cout << year << " is not a leap year" << endl;
    }

    return 0;
}
