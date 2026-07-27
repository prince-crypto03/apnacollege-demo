// Task 41: Operator precedence puzzle
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 2, d = 8, e = 3, f = 4;

    /*
     * Expression: a + b * c - d / e % f
     *
     * Step 1: b * c       = 5 * 2 = 10
     * Step 2: d / e       = 8 / 3 = 2  (integer division)
     * Step 3: (d/e) % f   = 2 % 4 = 2
     * Step 4: a + 10 - 2  = 18
     */

    int result = a + b * c - d / e % f;

    cout << "Result = " << result << endl;

    return 0;
}
