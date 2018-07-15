#include<iostream>
#include<vector>

using namespace std;

int main(){

  int n = 10;
  vector<bool> arr;
  arr.resize(n);

  for(int i = 0;i<n;i++){
    arr[i] = i;
  }

  cout << " ========= " << endl;
  cout << arr[1] << endl;
  cout << arr.at(0) << endl;
  cout << arr.at(1) << endl;




  return 0;
}
