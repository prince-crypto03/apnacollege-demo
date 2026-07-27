// Task 24: Auto keyword and type inference
#include <iostream>
using namespace std;

int main() {
    auto num = 10;        // auto becomes int
    auto decimal = 3.14;  // auto becomes double
    auto letter = 'A';    // auto becomes char

    cout << "num = " << num << ", size = " << sizeof(num) << " bytes" << endl;
    cout << "decimal = " << decimal << ", size = " << sizeof(decimal) << " bytes" << endl;
    cout << "letter = " << letter << ", size = " << sizeof(letter) << " bytes" << endl;

    return 0;
}
