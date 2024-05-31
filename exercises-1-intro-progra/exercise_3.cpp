#include <iostream>
#include "exercise_3.h"

using namespace std;

void exercise_3() {
    int a, b;
    cout << "Ingrese dos enteros: ";
    cin >> a >> b;

    if (b != 0) {
        unsigned long int division = a / b;
        cout << division << "\n";
    } else { 
        cout << "Impossible\n";
    }
}

