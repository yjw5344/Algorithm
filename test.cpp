#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  vector<string> arr;
  arr.push_back("abcz");
  arr.push_back("abce");
  arr.push_back("abcd");

  for(int i = 0 ; i < arr.size() ; i++){
    cout << arr[i] << endl;
  }

  cout << "=====" << endl;

  sort(arr.begin(),arr.end());

  for(int i = 0 ; i < arr.size() ; i++){
    cout << arr[i] << endl;
  }

  return 0;
}
