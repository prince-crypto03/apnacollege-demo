// Task 23: Volume and surface area of a cuboid
#include <iostream>
using namespace std;

int main() {
    float length, breadth, height, volume, surfaceArea;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    cout << "Enter height: ";
    cin >> height;

    volume = length * breadth * height;
    surfaceArea = 2 * (length * breadth + breadth * height + height * length);

    cout << "Volume = " << volume << endl;
    cout << "Total Surface Area = " << surfaceArea << endl;

    return 0;
}
