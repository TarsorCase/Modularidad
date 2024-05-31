#include <iostream>
#include <cmath>
#include "exercise_7.h"

using namespace std;

void exercise_7() {
    double r;
    cout << "Ingrese el radio: ";
    cin >> r;

    if (r < 0) {
        cout << "Error: Radius cannot be negative.\n";
    } else {
        double power = pow(r, 2);
        double area = 4 * 3.14 * power;
        cout << area << "\n";
    }
}

