#include <iostream>
#include <string>
#include "exercise_9.h"

using namespace std;

void exercise_9() {
    string s1, s2, s3, s4, s5;
    cout << "Ingrese cinco cadenas: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    char ch1 = s1[0];
    char ch2 = s2[0];
    char ch3 = s3[0];
    char ch4 = s4[0];
    char ch5 = s5[0];
    cout << ch1 << ch2 << ch3 << ch4 << ch5 << "\n";
    if (ch1 == ch5) {
        cout << "Hemos encontrado algo!" << endl;
    } else {
        cout << "Aun sin suerte" << endl;
    }
}

