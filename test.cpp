#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int> tmp;
  tmp.push_back(3);
  tmp.push_back(1);
  tmp.push_back(2);
  tmp.push_back(7);
  tmp.push_back(6);
  sort(tmp.begin(), tmp.end(),greater<int>());

  for(auto i : tmp){
    cout << i << endl;
  }
  return 0;
}
