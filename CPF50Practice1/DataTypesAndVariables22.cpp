// Task 22: Global vs local variable demonstration
#include <iostream>
using namespace std;

int value = 100;  // Global variable

void showValues() {
    int value = 50;  // Local variable (same name as global)

    cout << "Local value = " << value << endl;
    cout << "Global value = " << ::value << endl;  // :: means global scope
}

int main() {
    showValues();
    return 0;
}
