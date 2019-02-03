#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

//  int -> string으로 변환해서 정렬할 경우
//  ex) "9", "11", "12", "91" => "11", "12", "9", "91" 순으로 정렬이된다.

int main(){
  string s1 = "22";
  string s2 = "21";
  if(s1 > s2){
    cout << s1 << endl;
  }else{
    cout << s2 << endl;
  }

  cout << endl;

  vector<string> vec;

  vec.push_back("91");
  vec.push_back("13");
  vec.push_back("22");
  vec.push_back("9");
  vec.push_back("11");
  vec.push_back("21");
  vec.push_back("12");

  for(auto i : vec){
    cout << i << endl;
  }
  cout <<"===========" << endl;

  sort(vec.begin(), vec.end());
  for(auto i : vec){
    cout << i << endl;
  }


  return 0;
}
