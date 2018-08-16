#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<int> arr;

  arr.push_back(1);
  arr.push_back(12);
  arr.push_back(13);
  arr.push_back(4);
  arr.push_back(5);
  arr.push_back(6);

  int n1 = 10;
  int n2 = 9;
  cout << *max_element(arr.begin(), arr.end()) << endl;



  return 0;
}
