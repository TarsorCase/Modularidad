#include <iostream>
#include "exercise_9_2.h"

using namespace std;

void exercise_9_2() {
    string s;
    cin.ignore();
    getline(cin, s);
    int f = 0;
    int result = 0;
    int size = s.length();

    for (char c : s) {
        if (c == 'f') {
            ++f;
        }
    }
    if (f == 0) {
        cout << "-2\n";
    } else if (f == 1) {
        cout << "-1\n";
    } else {
        for (char c : s) {
            ++result;
            if (c == 'f') {
                cout << result << "\n";
                break;
            }
        }
    }
}

