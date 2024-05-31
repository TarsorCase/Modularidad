#include <vector>
#include <iostream>
using namespace std;

int main(){  
  vector<vector<int>> matriz = {
        {32, 5, 18, 24, 11},
        {3, 14, 29, 22, 7},
        {30, 1, 13, 40, 25},
        {16, 36, 9, 38, 12},
        {20, 4, 35, 27, 2},
        {8, 33, 10, 19, 26},
        {28, 37, 6, 21, 34},
        {15, 23, 39, 17, 31}
  };
  bool cont = true;
  while(cont == true){
    int num;
    bool esta = false;
    cin >> num;

    for(int i = 0; i < matriz.size(); ++i){
      for(int j = 0; j < matriz[i].size(); ++j){
        if(num == matriz[i][j]){
          esta = true;
          cout << i << " " << j;
        }
      }
    }
    if(esta != true){
      cout << "El valor no se encuentra \n";
    }
    cout << "\nWould you like to continue? 1 --> yes | -1 --> no \n";
    int ans;
    cin >> ans;
    if(ans == -1){
      cont = false;
    }
  }
}

