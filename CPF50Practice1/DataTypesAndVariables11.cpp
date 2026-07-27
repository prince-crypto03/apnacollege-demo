// Task 11: ASCII value of a character
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Type casting char to int gives ASCII value
    int asciiValue = (int)ch;

    cout << "ASCII value of '" << ch << "' is " << asciiValue << endl;

    return 0;
}
