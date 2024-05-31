#include <iostream>
#include "exercise_16_2.h"

using namespace std;

void exercise_16_2() {
    int divident, divider;
    cin >> divident >> divider;
    if (divider != 0) {
        int cociente = 0;
        while (divident >= divider) {
            ++cociente;
            divident -= divider;
        }
        cout << cociente << ' ' << divident << endl;
    }
}

