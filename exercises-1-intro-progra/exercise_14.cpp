#include "exercise_14.h"
#include <string>
using namespace std;
string exercise_14(int number_of_docs) {
    if (number_of_docs > 1) {
        return std::to_string(number_of_docs) + " documentos encontrados";
    } else if (number_of_docs < 1) {
        return "No se encontraron documentos";
    } else {
        return "Se encontro un documento";
    }
}

