#include "exercise_5_v.h"
#include <vector>
#include <iostream>
using namespace std;

void exercise_5_v(){  
  vector<vector<int>> matriz4x4(4, vector<int>(4));
  for(auto &yes : matriz4x4){
    for(auto &no : yes){
      cin >> no;
    };
  };
  cout << "\nMatriz 4x4 already full \n";
  vector <int> matriz1x4(4);
  for(auto &yes : matriz1x4){
      cin >> yes;
  };
  cout << "\nMatriz 1x4 already full \n";
  int ans = 0;
  vector <int> result;
  for(int i = 0; i < matriz4x4.size(); ++i){
    for(int j = 0; j < matriz4x4.size(); ++j){
      ans += matriz4x4[j][i] * matriz1x4[j];
    }
  result.push_back(ans);
  }
  for(const auto &yes : result){cout << yes << " ";};
}
