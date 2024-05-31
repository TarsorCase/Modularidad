#include <iostream>
#include "exercise_3_2.h"

using namespace std;

void exercise_3_2() {
    string s1;
    cin.ignore();
    getline(cin, s1);
    int size = s1.size();
    if (size < 20) {
        for (char num : s1) {
            if (num == '1') {
                cout << "Om-nom-nom :P\n";
            } else if (num == '0') {
                cout << "No cake :(\n";
                break;
            }
        }
    } else {
        for (int i = 0; i < 10; ++i) {
            cout << "Om-nom-nom :P\n";
        }
    }
}

