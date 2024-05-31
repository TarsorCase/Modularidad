#include <cmath>
#include "exercise_13_2.h"

long exercise_13_2(int n, int k) {
    int result = 0;
    for (int i = 1; i <= n; ++i) {
        int power = pow(i, k);
        result += power;
    }
    return result;
}

