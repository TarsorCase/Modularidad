#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
  vector<int> line;
  vector<int> worry;
  string command;
  int contador;
  cin >> contador;
  for(int i = 0; i <= contador; ++i){
    getline(cin, command);
    istringstream iss(command);
    string prt1, prt2;

    if(iss >> prt1){
      if(iss >> prt2){
        int number = stoi(prt2);
        if(prt1 == "COME"){
          if(number < 0){
           line.resize(line.size() + number);
          }else{
           line.resize(line.size() + number, 0);
          }
        }else if (prt1 == "WORRY"){
          line[number - 1] = 1;
        }
      }else if(prt1 == "WORRY_COUNT"){
          int worry_count = count(line.begin(), line.end(), 1);  
          worry.push_back(worry_count);
      }
    }
  }
  for(const auto &yes : worry){
    cout << yes << " ";
  }
  return 0;
}
