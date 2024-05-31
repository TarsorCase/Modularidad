#include "exercise_15.h"
#include <iostream>

void exercise_15(int a, int b, int c) {
    int t;
    std::cout << "Los valores son: a = " << a << " b = " << b << " y c = " << c << "\n";
    std::cout << "Permutamos: a => b, b => c, c => a\n";
    
    t = a;
    a = c;
    c = b;
    b = t;
    
    std::cout << "Los valores despues de la permutacion son: a = " << a << " b = " << b << " c = " << c << "\n";
}

