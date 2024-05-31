#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

vector<string> mes(int next, vector <string> month);

int main(){
  vector<string> line(31, " ");
  vector<string> dump;
  string command;
  int contador;
  int next = 1;
  cin >> contador;
  for(int i = 0; i <= contador; ++i){
    getline(cin, command);
    istringstream iss(command);
    string prt1, prt2, prt3;

    if(iss >> prt1){
      if(iss >> prt2){
        int number = stoi(prt2);
        if(iss >> prt3){
          if(prt1 == "ADD"){
            if (!line[number - 1].empty()) {
               line[number - 1] += " "; // Add space if the position is not empty
            }
            line[number - 1] += prt3;
          }
        }
        else if(prt1 == "DUMP"){
          dump.push_back(line[number - 1]);
        }
      }else if(prt1 == "NEXT"){
        ++next;
        line = mes(next, line);
      }
    }
  }
  for(const auto &yes : dump){
    istringstream stream(yes);
    string word;
    int itereator = 0;
    while(stream >> word){
      ++itereator;
    }
    cout << itereator << yes << "\n";
  }
  return 0;
}

vector<string> mes(int next, vector <string> month){
  vector<int> days_in_month = {31, 28, 31, 31, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (next >= 1 && next <= 12) {
        string last_position = month.back(); 
        month.resize(days_in_month[next - 1]);
        month[month.size() - 1] = last_position;
    }
    return month;
}
