// Task 13: Type casting - int to float division
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first integer: ";
    cin >> a;

    cout << "Enter second integer: ";
    cin >> b;

    // Without casting, a/b gives integer result (wrong for decimals)
    cout << "Without casting: " << a / b << endl;

    // With explicit casting, we get correct decimal result
    float result = (float)a / (float)b;
    cout << "With casting: " << result << endl;

    return 0;
}
