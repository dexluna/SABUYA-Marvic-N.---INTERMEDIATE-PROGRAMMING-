#include <iostream>
using namespace std;

int main() {
    double time, distance;
    cout << "Enter time (hours): ";
    cin >> time;
    cout << "Enter distance (km): ";
    cin >> distance;
    double speed = distance / time;
    cout << "Speed: " << speed << " km/h";
    return 0;
}
