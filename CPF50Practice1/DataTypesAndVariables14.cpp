// Task 14: Area of a circle using const
#include <iostream>
using namespace std;

int main() {
    const float PI = 3.14159f;
    float radius, area;

    cout << "Enter radius of circle: ";
    cin >> radius;

    area = PI * radius * radius;

    cout << "Area of circle = " << area << endl;

    return 0;
}
