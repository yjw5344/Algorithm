#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(){

  vector<int> arr;
  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(12);
  arr.push_back(15);

  cout << "vector의 모든 원소 출력 " << endl;
  for(int i = 0 ; i< arr.size() ; i++){
    cout << arr.at(i) << endl;
  }

  cout << "vector의 최대값 출력!! : ";
  cout << *max_element(arr.begin() , arr.end()) << endl;



  return 0;
}
