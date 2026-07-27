// Task 21: BMI calculator
// Formula: BMI = weight / (height * height)
#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    cout << "Enter weight (in kg): ";
    cin >> weight;

    cout << "Enter height (in meters): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << "BMI = " << bmi << endl;

    return 0;
}
