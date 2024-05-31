#include <string>
#include <iostream>
#include "exercise_14_2.h"

using namespace std;

string exercise_14_2(int n) {
    string sentence = to_string(n);
    int size = sentence.length();
    string original = "";
    string reversed = "";
    getline(cin, original);
    if (size <= 100) {
        // Remove spaces from the original string (though it won't have any spaces as it's a number)
        for (char c : sentence) {
            if (c != ' ') {
                original += c;
            }
        }

        // Create the reversed string
        for (int i = original.length() - 1; i >= 0; --i) {
            reversed += original[i];
        }

        // Compare the original and reversed strings
        for (int i = 0; i < original.length(); ++i) {
            char o = original[i];
            char r = reversed[i];
            if (o != r) {
                return "No es palindrome";
            }
        }
        return "Es palindrome";
    } else {
        return "Se supero la cantidad de caracteres permitidos la cual es 100";
    }
    
    // This return statement ensures that a value is returned in all control paths
    return "Unexpected case";
}

