#include <iostream>
#include "exercise_8.h"

using namespace std;

void exercise_8() {
    long int seconds;
    cout << "Ingrese la cantidad de segundos: ";
    cin >> seconds;

    int hours;
    int minutes;
    int seconds_if = seconds;
    int totalSeconds = seconds;

    hours = totalSeconds / 3600;
    int remainingSeconds = totalSeconds % 3600;
    minutes = remainingSeconds / 60;
    seconds = remainingSeconds % 60;

    if (seconds < 0) {
        cout << "Error: Input seconds cannot be negative.\n";
    }else if( seconds_if > 0){
        if(hours < 10 && minutes < 10 && seconds < 10){
            string hour_value = "0" + to_string(hours);
            string minute_value = "0" + to_string(minutes);
            string second_value = "0" + to_string(seconds);
            cout << hour_value << ":" << minute_value << ":" << second_value << "\n";
        }else if(hours >= 10 && minutes < 10 && seconds < 10){
            string hour_value = "0" + to_string(hours);
            string minute_value = "0" + to_string(minutes);
            string second_value = "0" + to_string(seconds);
            cout << hours << ":" << minute_value << ":" << second_value << "\n";
        }else if(hours >= 10 && minutes >= 10 && seconds < 10){
            string hour_value = "0" + to_string(hours);
            string minute_value = "0" + to_string(minutes);
            string second_value = "0" + to_string(seconds);
            cout << hours << ":" << minutes << ":" << second_value << "\n";
        }else if(hours >= 10 && minutes >= 10 && seconds >= 10){
            string hour_value = "0" + to_string(hours);
            string minute_value = "0" + to_string(minutes);
            string second_value = "0" + to_string(seconds);
            cout << hours << ":" << minutes << ":" << seconds << "\n";
        }else if(hours < 10 && minutes < 10 && seconds >= 10){
            string hour_value = "0" + to_string(hours);
            string minute_value = "0" + to_string(minutes);
            string second_value = "0" + to_string(seconds);
            cout << hour_value << ":" << minute_value << ":" << seconds << "\n";
        }
    }else {
        string hour_value = "0" + to_string(hours);
        string minute_value = "0" + to_string(minutes);
        string second_value = "0" + to_string(seconds);
        cout << hour_value << ":" << minute_value << ":" << second_value << "\n";
    }
}

