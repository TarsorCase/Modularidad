#include <iostream>
#include "exercise_11.h"

using namespace std;

void exercise_11() {
    int number;
    cout << "Ingrese un número: ";
    cin >> number;

    if (number == 11235813) {
        cout << "Se encontro a Fibonacci" << endl;
    } else {
        cout << "Esto no es de Fibonacci" << endl;
    }
}

