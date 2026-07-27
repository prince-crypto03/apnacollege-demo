// Task 8: Temperature converter (Celsius to Fahrenheit)
// Formula: F = (C * 9/5) + 32
#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;

    return 0;
}
