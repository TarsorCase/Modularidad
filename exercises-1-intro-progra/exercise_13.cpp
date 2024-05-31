#include <iostream>

using namespace std;
void exercise_13() {
  int age, years_of_experience;
  cin >> age >> years_of_experience;
   if (age >= 18){
    if(years_of_experience < 3){
      cout << "Project coordinator"; 
            
    }else if(years_of_experience >= 3 && years_of_experience < 5){
      cout << "Project manager"; 
            
    }else if(years_of_experience >= 5){
      cout << "Senior project manager"; 
    }
  }else {
    cout << "Not eligible";
  }
}
