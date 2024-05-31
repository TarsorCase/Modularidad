#include <iostream>
#include "exercise_18_19_2.h"

using namespace std;

void exercise_18_19_2() {
    int debut, fin;
    cin >> debut >> fin;
    int counter = 0;
    if (debut > 0) {
        if (fin >= debut) {
            for (int i = debut; i <= fin; ++i) {
                int num = i;
                cout << i << "->";
                counter = 0;
                while (num != 0) {
                    if (num % 3 == 0) {
                        num = num + 4;
                    } else if (num % 4 == 0) {
                        num = num / 2;
                    } else {
                        num = num - 1;
                    }
                    ++counter;
                }
                cout << counter << "\n";
            }
        } else {
            cout << "El numero de fin no debe de ser menor al inicial\n";
        }
    } else {
        cout << "El numero debe de ser positivo y mayor a zero\n";
    }
}

