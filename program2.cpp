#include <iostream>
using namespace std;

int main() {
    double diameter;
    cout << "Enter diameter: ";
    cin >> diameter;
    double radius = diameter / 2;
    double area = 3.14159 * radius * radius;
    cout << "Area of circle: " << area;
    return 0;
}
