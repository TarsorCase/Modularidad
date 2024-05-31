#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main(){  
  int n;
  cin >> n;
  vector <int> days(n);
  int ans = 0;
  for(int &yes : days){
      cin >> yes;
  }
  for(int i = 0; i < days.size(); ++i){
    ans += days[i];
  }
  int median = ans/n;
  int iterator = 0;
  int count = 0;
  for(int &yes : days){
    if(yes > median){
      ++count;
    }
  }
  cout << count << "\n";
  for(int &yes : days){
    if(yes > median){
      cout << iterator << " ";
    }
  ++iterator;
  }
};
