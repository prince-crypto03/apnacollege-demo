// Task 28: Increment and decrement operators
#include <iostream>
using namespace std;

int main() {
    int x = 5;

    cout << "Starting value: " << x << endl;

    cout << "After pre-increment (++x): " << ++x << endl;
    cout << "After post-increment (x++): " << x++ << endl;
    cout << "Value now: " << x << endl;

    cout << "After pre-decrement (--x): " << --x << endl;
    cout << "After post-decrement (x--): " << x-- << endl;
    cout << "Final value: " << x << endl;

    return 0;
}
