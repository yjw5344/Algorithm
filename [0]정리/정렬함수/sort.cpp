#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool desc(int a, int b){
    return a > b; // 내림차순 정렬 -> 사용자의 필요에 따라 커스텀이 가능하다.
}

int main(){

  vector<int> vec;
  vec.push_back(10);
  vec.push_back(6);
  vec.push_back(8);
  vec.push_back(4);
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(14);
  vec.push_back(18);
  vec.push_back(15);


  // Sort(내림차순) 실행!
  sort(vec.begin(), vec.end(), greater<int>());
  for(vector<int>::iterator iter = vec.begin() ; iter != vec.end() ; iter++ ){
    cout << *iter << endl;
  }

  cout << "==========================" << endl;

  // Sort(오름차순) 실행!
  sort(vec.begin(), vec.end());
  for(vector<int>::iterator iter = vec.begin() ; iter != vec.end() ; iter++ ){
    cout << *iter << endl;
  }

  cout << "==========================" << endl;

  // Sort 함수 커스텀 (내림차순 정렬))
  sort(vec.begin(), vec.end(), desc);
  for(vector<int>::iterator iter = vec.begin() ; iter != vec.end() ; iter++ ){
    cout << *iter << endl;
  }

  return 0;
}
