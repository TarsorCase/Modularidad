#include <iostream>
#include "exercise_5.h"

using namespace std;

void exercise_5() {
    char character;
    cout << "Ingrese un caracter: ";
    cin >> character;

    int character_ascii = character;
    if (character_ascii >= 0 && character_ascii <= 64) {
        cout << "not an alphabet\n";
    } else if (character_ascii > 64 && character_ascii <= 90) {
        cout << "upper-case alphabet\n";
    } else if (character_ascii > 90 && character_ascii <= 96) {
        cout << "not an alphabet\n";
    } else if (character_ascii > 96 && character_ascii <= 122) {
        cout << "lower-case alphabet\n";
    } else if (character_ascii > 122 && character_ascii <= 126) {
        cout << "not an alphabet\n";
    }
}

