#include <iostream>
#include "exercise_7_2.h"

using namespace std;

void exercise_7_2() {
    int n;
    cin >> n;
    double suma = 0.0;
    for (int i = 1; i <= n; i++) {
        suma += (i % 2 == 0) ? -1.0 / i : 1.0 / i;
    }
    cout << suma << "\n";
}

