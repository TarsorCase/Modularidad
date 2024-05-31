#include <iostream>
#include "exercise_2_2.h"

using namespace std;

void exercise_2_2() {
    string s1;
    cin.ignore();
    getline(cin, s1);
    int space = 0;
    while (space < s1.length()) {
        while (space < s1.length() && s1[space] == ' ') {
            space++;
        }

        int end = space;
        while (end < s1.length() && s1[end] != ' ') {
            end++;
        }

        cout << "[" << s1.substr(space, end - space) << "]" << endl;
        space = end + 1;
    }
}

