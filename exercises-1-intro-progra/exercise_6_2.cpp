#include <string>
#include <iostream>
#include "exercise_6_2.h"

using namespace std;

int exercise_6_2() {
    int n;
    cin >> n;
    int result = 0;
    if (n >= 0) {
        string number = to_string(n);
        for (char c : number) {
            result += c - '0';
        }
    } else {
        result = 0;
        return result;
    }
    return result;
}

