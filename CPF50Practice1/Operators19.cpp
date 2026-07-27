// Task 44: Swap the nibbles of a byte
#include <iostream>
using namespace std;

int main() {
    unsigned char byte;

    cout << "Enter an 8-bit number (0-255): ";
    int input;
    cin >> input;
    byte = (unsigned char)input;

    // Upper 4 bits move down, lower 4 bits move up
    unsigned char swapped = ((byte & 0x0F) << 4) | ((byte & 0xF0) >> 4);

    cout << "Original: " << (int)byte << endl;
    cout << "After swapping nibbles: " << (int)swapped << endl;

    return 0;
}
