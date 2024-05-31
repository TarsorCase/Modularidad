#include <iostream>
#include "exercise_11_2.h"

using namespace std;

void exercise_11_2() {
    float result = 1;
    cout << "U0 = " << result << "\n";
    for (int i = 1; i <= 10; ++i) {
        result /= i;
        cout << "U" << i << " = " << result << "\n";
    }
}

