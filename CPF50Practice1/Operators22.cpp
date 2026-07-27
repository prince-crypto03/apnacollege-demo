// Task 47: Convert Celsius to Kelvin and Fahrenheit
#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit, kelvin;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;

    cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;
    cout << celsius << " Celsius = " << kelvin << " Kelvin" << endl;

    return 0;
}
