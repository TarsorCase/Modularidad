#include <iostream>
#include <string>
#include "exercise_12.h"

using namespace std;

void exercise_12() {
    
    string color1, color2, color3, color_transeunte;
    int num_pisos1, num_pisos2, num_pisos3, num_pisos_transeunte;
    cout << "Ingrese color1, num_pisos1, color2, num_pisos2, color3, num_pisos3, color_transeunte, num_pisos_transeunte: ";
    cin >> color1 >> num_pisos1 >> color2 >> num_pisos2 >> color3 >> num_pisos3 >> color_transeunte >> num_pisos_transeunte;
    if(num_pisos_transeunte == -1){
        if (color_transeunte == color1 && 
        color_transeunte == color2){
            cout << num_pisos2 << "\n";
            cout << num_pisos1 << "\n"; 
        }else if(color_transeunte == color1 && 
        color_transeunte == color3){
            cout << num_pisos3 << "\n";
            cout << num_pisos1 << "\n"; 
        }else if(color_transeunte == color2 && 
        color_transeunte == color3){
            cout << num_pisos3 << "\n";
            cout << num_pisos2 << "\n"; 
        } 
        
    }else if(num_pisos_transeunte == num_pisos1 && num_pisos_transeunte == num_pisos2 && num_pisos_transeunte == num_pisos3 && color_transeunte == color1 &&  num_pisos_transeunte == num_pisos1 && color_transeunte == color2 &&  num_pisos_transeunte == num_pisos2 && color_transeunte == color3 &&  num_pisos_transeunte == num_pisos3){ cout << "1\n" << "2\n" << "3\n";
        
    }else if(num_pisos_transeunte == num_pisos1 || num_pisos_transeunte == num_pisos2 || num_pisos_transeunte == num_pisos3){
        if (color_transeunte == color1 && num_pisos_transeunte == num_pisos1){
            cout << num_pisos1 << "\n";
        }else if(color_transeunte == color2 && num_pisos_transeunte == num_pisos2){
            cout << num_pisos2 << "\n"; 
        }else if(color_transeunte == color3 && num_pisos_transeunte == num_pisos3){
            cout << num_pisos3 << "\n";
        }    
    }
   
}

