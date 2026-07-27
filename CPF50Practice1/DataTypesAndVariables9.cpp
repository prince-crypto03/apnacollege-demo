// Task 9: Convert seconds to hours, minutes, and seconds
#include <iostream>
using namespace std;

int main() {
    int totalSeconds, hours, minutes, seconds;

    cout << "Enter total seconds: ";
    cin >> totalSeconds;

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;

    return 0;
}
