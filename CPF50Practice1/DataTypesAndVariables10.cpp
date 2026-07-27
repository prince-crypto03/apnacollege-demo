// Task 10: Integer overflow demonstration
#include <iostream>
using namespace std;

int main() {
    short int num;

    // short int range is usually -32768 to 32767
    num = 35000;

    cout << "Value stored in short int: " << num << endl;

    /*
     * Overflow occurs because 35000 is bigger than the maximum
     * value a short int can hold. The extra bits wrap around,
     * so we get an unexpected (wrong) number.
     */

    return 0;
}
