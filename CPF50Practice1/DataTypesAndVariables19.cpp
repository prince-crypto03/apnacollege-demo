// Task 19: Signed vs unsigned int behavior
#include <iostream>
using namespace std;

int main() {
    unsigned int num;

    num = -5;

    cout << "Value stored in unsigned int: " << num << endl;

    /*
     * When we assign -5 to unsigned int, it cannot store negative values.
     * So the value wraps around and becomes a very large positive number.
     * This is called wrap-around behavior.
     */

    return 0;
}
