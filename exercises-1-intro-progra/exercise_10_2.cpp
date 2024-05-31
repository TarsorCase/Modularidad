#include "exercise_10_2.h"

int exercise_10_2(int a, int b) {
    int x = 1;
    for (int i = 2; i <= 13; ++i) {
        while (a % i == 0 && b % i == 0) {
            x *= i;
            a = a / i;
            b = b / i;
        }
    }
    return x;
}

