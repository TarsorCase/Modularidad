#include <iostream>
#include "exercise_4_2.h"

using namespace std;

void exercise_4_2() {
    int n;
    cin >> n;
    int valor;
    if (n >= 0) {
        if (n <= 14) {
            if (n != 0) {
                int i = n - 1;
                for (valor = n; i > 0; --i) {
                    valor *= i;
                }
                int answer = valor;
                cout << answer << "\n";
            } else {
                cout << 1 << "\n";
            }
        } else {
            cout << "El numero es muy grande. Intentelo de nuevo\n";
        }
    } else {
        cout << "El numero es negativo. Intentelo de nuevo\n";
    }
}

