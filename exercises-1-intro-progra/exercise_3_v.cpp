#include "exercise_3_v.h"
#include <vector>
#include <iostream>
#include <algorithm>
void exercise_3_v() {
    std::vector<std::vector<int>> matriz = {
        {32, 5, 18, 24, 11},
        {3, 14, 29, 22, 7},
        {30, 1, 13, 40, 25},
        {16, 36, 9, 38, 12},
        {20, 4, 35, 27, 2},
        {8, 33, 10, 19, 26},
        {28, 37, 6, 21, 34},
        {15, 23, 39, 17, 31}
    };

    // Imprimir la matriz original
    for(int i = 0; i < matriz.size(); ++i){
        for(int j = 0; j < matriz[i].size(); ++j){
            std::cout << matriz[i][j] << " ";
        }
    }
    std::cout << "\n";

    // Imprimir la matriz en reversa
    for(int i = matriz.size() - 1; i >= 0; --i){
        for(int j = matriz[i].size() - 1; j >= 0; --j){
            std::cout << matriz[i][j] << " ";
        }
    }
    std::cout << "\n";

    // Convertir la matriz en un vector 1D y ordenarlo
    std::vector<int> vec1D;
    for (const auto& vec : matriz) {
        vec1D.insert(vec1D.end(), vec.begin(), vec.end());
    }

    std::sort(vec1D.begin(), vec1D.end());

    // Imprimir el vector 1D ordenado
    for (const auto& val : vec1D) {
        std::cout << val << " ";
    }
}

