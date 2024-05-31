#include <iostream>
#include "exercise_12_2.h"

using namespace std;

void exercise_12_2() {
    float result = 1;
    float v = 1;
    for (int i = 1; i <= 10; ++i) {
        result /= i;
        v += result;
        cout << "U" << i << " = " << result << " V" << i << " = 1" << "\n";
    }
}

