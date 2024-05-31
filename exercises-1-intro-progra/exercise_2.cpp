#include <iostream>
#include <cmath>
#include "exercise_2.h"

using namespace std;

void exercise_2() {
    double A, B, C;
    cout << "Ingrese los coeficientes A, B y C: ";
    cin >> A >> B >> C;

    if (A == 0) {
        if (B != 0) {
            double raiz = -C / B;
            std::cout << raiz << std::endl;
        } else {
            if (C == 0) {
                std::cout << "Infinitas soluciones" << std::endl;
            } else {
                std::cout << "No hay solución" << std::endl;
            }
        }
    } else {
        double discriminante = B * B - 4 * A * C;

        if (discriminante > 0) {
            double raiz1 = (-B + sqrt(discriminante)) / (2 * A);
            double raiz2 = (-B - sqrt(discriminante)) / (2 * A);
            std::cout << raiz1 << " " << raiz2 << std::endl;
        } else if (discriminante == 0) {
            double raiz = -B / (2 * A);
            std::cout << raiz << std::endl;
        } else {
            std::cout << "Raíces complejas (ignoradas)" << std::endl;
        }
    }
}

