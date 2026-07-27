// Task 48: Count number of set bits (1s) in an integer
#include <iostream>
using namespace std;

int main() {
    int num, count = 0;

    cout << "Enter a positive integer: ";
    cin >> num;

    while (num > 0) {
        count = count + (num & 1);  // check last bit
        num = num >> 1;             // shift right by 1
    }

    cout << "Number of set bits = " << count << endl;

    return 0;
}
