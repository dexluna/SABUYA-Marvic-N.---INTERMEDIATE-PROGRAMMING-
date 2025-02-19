#include <iostream>
using namespace std;

int main() {
    double grams;
    cout << "Enter weight in grams: ";
    cin >> grams;
    double pounds = grams * 0.00220462;
    cout << "Equivalent in pounds: " << pounds;
    return 0;
}
