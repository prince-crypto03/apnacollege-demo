// Task 33: Left shift and right shift operators
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Original number: " << num << endl;
    cout << "Left shift by 2 (num << 2): " << (num << 2) << endl;
    cout << "Right shift by 2 (num >> 2): " << (num >> 2) << endl;

    /*
     * Left shift (<<) moves bits to the left -> value becomes larger (multiply by 2 each shift)
     * Right shift (>>) moves bits to the right -> value becomes smaller (divide by 2 each shift)
     */

    return 0;
}
