#include <iostream>

// Incluir todos los encabezados del primer y segundo trabajo
#include "exercise_1.h"
#include "exercise_2.h"
#include "exercise_3.h"
#include "exercise_4.h"
#include "exercise_5.h"
#include "exercise_6.h"
#include "exercise_7.h"
#include "exercise_8.h"
#include "exercise_9.h"
#include "exercise_10.h"
#include "exercise_11.h"
#include "exercise_12.h"
#include "exercise_13.h"
#include "exercise_14.h"
#include "exercise_15.h"
#include "exercise_16.h"

#include "exercise_1_2.h"
#include "exercise_2_2.h"
#include "exercise_3_2.h"
#include "exercise_4_2.h"
#include "exercise_5_2.h"
#include "exercise_6_2.h"
#include "exercise_7_2.h"
#include "exercise_8_2.h"
#include "exercise_9_2.h"
#include "exercise_10_2.h"
#include "exercise_11_2.h"
#include "exercise_12_2.h"
#include "exercise_13_2.h"
#include "exercise_14_2.h"
#include "exercise_15_2.h"
#include "exercise_16_2.h"
#include "exercise_17_2.h"
#include "exercise_18_19_2.h"

#include "exercise_3_v.h"
#include "exercise_4_v.h"
#include "exercise_5_v.h"
#include "exercise_6_v.h"
#include "exercise_7_v.h"
#include "exercise_8_v.h"
#include "exercise_9_v.h"
#include "exercise_10_v.h"

#include "board.h"

using namespace std;

void ejecutarPrimerTrabajo() {
    int choice;
    do {
        cout << "\n\nSeleccione el ejercicio a ejecutar del primer trabajo (1-16), o 0 para salir: \n";
        cin >> choice;

        switch (choice) {
            case 1: exercise_1(); break;
            case 2: exercise_2(); break;
            case 3: exercise_3(); break;
            case 4: exercise_4(); break;
            case 5: exercise_5(); break;
            case 6: exercise_6(); break;
            case 7: exercise_7(); break;
            case 8: exercise_8(); break;
            case 9: exercise_9(); break;
            case 10: exercise_10(); break;
            case 11: exercise_11(); break;
            case 12: exercise_12(); break;
            case 13: exercise_13(); break;
            case 14: {
                int number_of_docs;
                cout << "Ingrese el número de documentos: ";
                cin >> number_of_docs;
                string result = exercise_14(number_of_docs);
                cout << result << endl;
                break;
            }
            case 15: {
                int a, b, c;
                cout << "Ingrese a, b y c: ";
                cin >> a >> b >> c;
                exercise_15(a, b, c);
                break;
            }
            case 16: {
                int debut, fin;
                cout << "Ingrese hora de inicio y hora de fin: ";
                cin >> debut >> fin;
                exercise_16(debut, fin);
                break;
            }
            case 0: cout << "Saliendo..." << endl; break;
            default: cout << "Opción inválida. Intente de nuevo." << endl;
        }
    } while (choice != 0);
}

void ejecutarSegundoTrabajo() {
    int choice;
    while (true) {
        cout << "\n\nIngrese el número del ejercicio que desea ejecutar del segundo trabajo (1-19) o 0 para salir: \n";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        switch (choice) {
            case 1: exercise_1_2(); break;
            case 2: exercise_2_2(); break;
            case 3: exercise_3_2(); break;
            case 4: exercise_4_2(); break;
            case 5: exercise_5_2(); break;
            case 6: cout << exercise_6_2() << endl; break;
            case 7: exercise_7_2(); break;
            case 8: exercise_8_2(); break;
            case 9: exercise_9_2(); break;
            case 10: {
                int a, b;
                cin >> a >> b;
                cout << exercise_10_2(a, b) << endl;
                break;
            }
            case 11: exercise_11_2(); break;
            case 12: exercise_12_2(); break;
            case 13: {
                int n, k;
                cin >> n >> k;
                cout << exercise_13_2(n, k) << endl;
                break;
            }
            case 14: {
                int u;
                cin >> u;
                cout << exercise_14_2(u) << endl;
                break;
            }
            case 15: exercise_15_2(); break;
            case 16: exercise_16_2(); break;
            case 17: exercise_17_2(); break;
            case 18:
            case 19: exercise_18_19_2(); break;
            default: cout << "Opción no válida" << endl; break;
        }
    }
}

void ejecutarBoardFunciones() {
    // Inicialización de la variable board
    vector<vector<int>> board = {{'x', 0, 0, 0, -1, -1, -1, -1},
                                 {0, 0, 0, 0, 0, -1, -1, -1},
                                 {-1, -1, 0, -1, -1, 0, 0, 0},
                                 {-1, 0, 0, 0, 0, 0, 0, 'G'}};

    // Mostrar el board inicial
    PrintBoard(board);

    // Leer y mostrar el board desde el archivo
    string path = "boards/1.board";
    PrintBoard(ReadBoardFile(path));
}

void vectores() {
    int choice;
    while (true) {
        cout << "\n\nIngrese el número del ejercicio que desea ejecutar del trabajo de vectores (3-10) o 0 para salir: \n";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        switch (choice) {
            case 3: exercise_3_v(); break;
            case 4: exercise_4_v(); break;
            case 5: exercise_5_v(); break;
            case 6: exercise_6_v(); break;
            case 7: exercise_7_v(); break;
            case 8: exercise_8_v(); break;
            case 9: exercise_9_v(); break;
            case 10: exercise_10_v(); break;
            default: cout << "Opción no válida" << endl; break;
        }
    }
}

int main() {
    int trabajoChoice;

    do {
        cout << "\n\nSeleccione el trabajo a ejecutar:\n1 para el primer trabajo\n2 para el segundo trabajo\n3 para las funciones de board\n4 para los ejercicios de vectores del 3-10\n0 para salir: \n";
        cin >> trabajoChoice;

        switch (trabajoChoice) {
            case 1: ejecutarPrimerTrabajo(); break;
            case 2: ejecutarSegundoTrabajo(); break;
            case 3: ejecutarBoardFunciones(); break;
            case 4: vectores(); break;
            case 0: cout << "Saliendo..." << endl; break;
            default: cout << "Opción inválida. Intente de nuevo." << endl;
        }
    } while (trabajoChoice != 0);

    return 0;
}

