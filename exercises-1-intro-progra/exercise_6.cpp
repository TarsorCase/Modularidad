#include <iostream>
#include "exercise_6.h"

using namespace std;

void exercise_6() {
    int number;
    cout << "Ingrese un número del 1 al 7: ";
    cin >> number;

    switch (number) {
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday\n";
            break;
        default:
            cout << "Invalid input\n";
            break;
    }
}

