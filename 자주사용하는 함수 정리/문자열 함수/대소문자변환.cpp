/*
  대문자 to 소문자 : tolower()
  소문자 to 대문자 : toupper()

  tolower() & toupper() 함수를 이용하기 위해서는 ctype.h 헤더파일을 먼저 선언해야된다.
*/


#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main(){

  string str1 = "Hello";
  string str2 = "world";

  cout << str1 << endl;
  cout << str2 << endl;
  cout << "==============" << endl;

  str1.at(0) = tolower(str1.at(0));
  str2.at(0) = toupper(str2.at(0));

  cout << str1 << endl;
  cout << str2 << endl;

  return 0;
}
