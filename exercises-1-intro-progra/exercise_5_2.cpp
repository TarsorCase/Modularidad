#include <iostream>
#include "exercise_5_2.h"

using namespace std;

void exercise_5_2() {
    int n, k;
    cin >> n >> k;
    for (int i = 1; i < n; i++) {
        cout << "   ";
    }

    for (int day = 1; day <= k; day++) {
        if ((n + day - 1) % 7 == 0) {
            if (day < 10) cout << " ";
            cout << day << "\n";
        } else if (day == k) {
            cout << day << " \n";
        } else {
            if (day < 10) cout << " ";
            cout << day << " ";
        }
    }
}

