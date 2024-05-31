#include <iostream>
#include <cmath>
#include "exercise_17_2.h"

using namespace std;

void exercise_17_2() {
    int n;
    cin >> n;
    int contador = 0;
    int num = 2;
    while (contador < n) {
        bool primo = true;
        if (num <= 1) {
            primo = false;
        } else {
            for (int i = 2; i <= sqrt(num); ++i) {
                if (num % i == 0) {
                    primo = false;
                    break;
                }
            }
        }
        if (primo) {
            cout << num << " ";
            contador++;
        }
        num++;
    }
}

