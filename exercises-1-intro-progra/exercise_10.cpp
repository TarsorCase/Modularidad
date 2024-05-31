#include <iostream>
#include <string>
#include "exercise_10.h"

using namespace std;

void exercise_10() {
    int a, b;
    cout << "Ingrese dos enteros: ";
    cin >> a >> b;

    if (a < 0 || b < 0) {
        cout << 0 << endl;
    } else {
        unsigned long int sum_num = a + b;
        string size_num_string = to_string(sum_num);
        unsigned long int size_num = size_num_string.size();
        unsigned long int product = size_num * sum_num;
        cout << product << endl;
    }
}

