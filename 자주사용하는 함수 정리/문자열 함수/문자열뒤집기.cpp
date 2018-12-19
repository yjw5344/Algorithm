#include <iostream>
#include <string>
using namespace std;

int main(){

  string str = "show me the money";
  cout << str << endl;

  cout << "===================" << endl;

  // reverse 함수를 이용해서 문자열 뒤집기!
  reverse(str.begin(), str.end());
  cout << str << endl;

  return 0;
}
