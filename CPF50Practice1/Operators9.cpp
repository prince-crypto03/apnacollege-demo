// Task 34: Check if a number is a power of two
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a positive number: ";
    cin >> n;

    // Power of 2 trick: n & (n-1) equals 0 only for powers of 2
    if (n > 0 && (n & (n - 1)) == 0) {
        cout << n << " is a power of two" << endl;
    } else {
        cout << n << " is NOT a power of two" << endl;
    }

    return 0;
}
