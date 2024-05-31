#include "exercise_10_v.h"
#include <iostream>
#include <vector>

using namespace std;

void exercise_10_v() {
    vector<int> heights1 = {1, 1, 4, 2, 1, 3};
    vector<int> expected1 = {1, 1, 1, 2, 3, 4};
    int count1 = 0;
    for (int i = 0; i < heights1.size(); ++i) {
        if (heights1[i] != expected1[i]) {
            count1++;
        }
    }
    cout << "Salida 1: " << count1 << endl;

    vector<int> heights2 = {5, 1, 2, 3, 4};
    vector<int> expected2 = {1, 2, 3, 4, 5};
    int count2 = 0;
    for (int i = 0; i < heights2.size(); ++i) {
        if (heights2[i] != expected2[i]) {
            count2++;
        }
    }
    cout << "Salida 2: " << count2 << endl;

    vector<int> heights3 = {1, 2, 3, 4, 5};
    vector<int> expected3 = {1, 2, 3, 4, 5};
    int count3 = 0;
    for (int i = 0; i < heights3.size(); ++i) {
        if (heights3[i] != expected3[i]) {
            count3++;
        }
    }
    cout << "Salida 3: " << count3 << endl;
}

