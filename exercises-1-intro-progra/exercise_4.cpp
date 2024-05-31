#include <iostream>
#include "exercise_4.h"

using namespace std;

void exercise_4() {
    double n, a, b, x, y;
    cout << "Ingrese los valores n, a, b, x, y: ";
    cin >> n >> a >> b >> x >> y;

    float descuento_1 = x / 100;
    float descuento_2 = y / 100;
    
    if (n < a) {
        cout << n << "\n";        
    } else if (n >= a && n < b) {
        float descuento_pequeño = n - (n * descuento_1);
        cout << descuento_pequeño << "\n";
    } else {
        float descuento_grande = n - (n * descuento_2);
        cout << descuento_grande << "\n";
    }
}

