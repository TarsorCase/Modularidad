#include <iostream>
#include <string>
#include "exercise_1_2.h"

using namespace std;

void exercise_1_2() {
    string s1;
    cin.ignore();
    getline(cin, s1);
    int space = 0;
    for (char character : s1) {
        if (character == ' ') {
            cout << space << "\n";
        }
        space++;
    }
    int length = s1.length();
    cout << length << "\n";
}

