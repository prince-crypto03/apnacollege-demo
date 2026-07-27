// Task 25: Constant variable and compile-error check
#include <iostream>
using namespace std;

int main() {
    const int MAX_VALUE = 100;

    cout << "MAX_VALUE = " << MAX_VALUE << endl;

    // MAX_VALUE = 200;  // ERROR: cannot modify a const variable
    /*
     * This line fails to compile because 'const' means the value
     * cannot be changed after it is set. The compiler protects it.
     */

    return 0;
}
