#include <iostream>
#include "exercise_15_2.h"

using namespace std;

void exercise_15_2() {
    int decimal;
    cin >> decimal;
    if (decimal != 0) {
        string r;
        while (decimal != 0) {
            r = (decimal % 2 == 0 ? "0" : "1") + r;
            decimal /= 2;
        }
        cout << r << "\n";
    } else {
        cout << decimal << "\n";
    }
}

