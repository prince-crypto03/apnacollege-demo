// Task 12: Character from ASCII value
#include <iostream>
using namespace std;

int main() {
    int asciiValue;

    cout << "Enter ASCII value: ";
    cin >> asciiValue;

    // Type casting int to char gives the character
    char ch = (char)asciiValue;

    cout << "Character for ASCII " << asciiValue << " is '" << ch << "'" << endl;

    return 0;
}
