// Task 39: Comma operator demonstration
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, result;

    // Comma operator runs each expression left to right,
    // and returns the value of the last expression
    result = (a++, b++, a + b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Final result = " << result << endl;

    return 0;
}
