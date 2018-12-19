#include <iostream>
#include <string>
using namespace std;

// 문자(열) -> 숫자
// 숫자 -> 문자(열))

int main(){

  int num = 100;

  // int to string => to_string() 사용
  string str = to_string(num);
  cout << str << endl;

  // string to int => stoi() 사용
  string ex = "200";
  int n = stoi(ex);
  cout << n << endl;

  return 0;
}
