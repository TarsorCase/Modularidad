#include "exercise_16.h"
#include <iostream>

void exercise_16(int debut, int fin) {
    if (debut < 0 || debut > 24 || fin < 0 || fin > 24) {
        std::cout << "Las horas deben estar entre 0 y 24!\n"; 
    } else if (fin > debut) {
        int result = 0;
        int contador1 = 0;
        int contador2 = 0;
        for (int i = debut; i < fin; ++i) {
            if (i >= 7 && i < 17) {
                result += 2;
                ++contador2;
            } else {
                result += 1;
                ++contador1;
            }
        }
        std::cout << "Haz alquilado una bicicleta por\n";
        if (contador2 == 0) {
            std::cout << contador1 << " hora(s) con el tarifario de 1 boliviano(s)\n";
        } else if (contador1 == 0) {
            std::cout << contador2 << " hora(s) con el tarifario de 2 boliviano(s)\n";
        } else {
            std::cout << contador1 << " hora(s) con el tarifario de 1 boliviano(s)\n";
            std::cout << contador2 << " hora(s) con el tarifario de 2 boliviano(s)\n";
        }
        std::cout << "El monto total a pagar es de " << result << " boliviano(s).\n";
    } else if (fin == debut) {
        std::cout << "Que extraño, no has alquilado tu bicicleta por mucho tiempo!\n";
    } else {
        std::cout << "Que extraño, el inicio del alquiler es después del final...\n";
    }
}

