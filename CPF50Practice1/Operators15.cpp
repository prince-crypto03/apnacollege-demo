// Task 40: sizeof operator with expressions
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    cout << "sizeof(a + b) = " << sizeof(a + b) << " bytes" << endl;
    cout << "sizeof(3.14) = " << sizeof(3.14) << " bytes" << endl;
    cout << "sizeof('X') = " << sizeof('X') << " bytes" << endl;

    return 0;
}
