#include <iostream>
#include <string>
#include <cctype>
#include "exercise_1.h"

using namespace std;

void exercise_1() {
    string s1, s2, s3;
    cout << "Ingrese tres cadenas: ";
    cin >> s1 >> s2 >> s3;

    string minimum_line;
    bool lower_case = true;

    size_t line1_length = s1.length();
    size_t line2_length = s2.length();
    size_t line3_length = s3.length();

    for (char character1 : s1) {
        if (!std::islower(character1)) {
            lower_case = false;
            break;  
        }
    }

    for (char character2 : s2) {
        if (!std::islower(character2)) {
            lower_case = false;
            break;  
        }
    }

    for (char character3 : s3) {
        if (!std::islower(character3)) {
            lower_case = false;
            break;  
        }
    }

    if (lower_case) {
        if (line1_length <= 30 && line2_length <= 30 && line3_length <= 30) {
            minimum_line = s1;
            if (s2 < minimum_line) {
                minimum_line = s2;
            } else if (s3 < minimum_line) {
                minimum_line = s3;
            }
            cout << minimum_line;
        } else {
            cout << "!";
        }
    } else {
        cout << "!";
    }
}

