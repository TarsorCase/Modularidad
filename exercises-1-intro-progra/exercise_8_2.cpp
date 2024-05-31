#include <iostream>
#include "exercise_8_2.h"

using namespace std;

void exercise_8_2() {
    string s;
    cin.ignore();
    getline(cin, s);
    bool palindrome = true;
    int size = s.length();
    string original = "";
    string reversed = "";
    if (size <= 100) {
        for (char c : s) {
            if (c != ' ') {
                original += c;
            }
        }
        for (int i = original.length() - 1; i >= 0; --i) {
            reversed += original[i];
        }
        int size_r = reversed.length();
        for (int i = 0; i <= size_r; ++i) {
            char o = original[i];
            char r = reversed[i];
            if (o != r) {
                palindrome = false;
            }
        }
        if (palindrome == false) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    } else {
        cout << "Se supero la cantidad de caracteres permitidos la cual es 100";
    }
}

