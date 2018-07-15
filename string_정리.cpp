#include<iostream>
#include<string>   // string 헤더 호출
#include<algorithm>

using namespace std;

int main(){

  // string 문자열 선언
  string str = "hello world";

  cout << str << endl;

  reverse(str.begin(), str.end());
  // #include<algorithm> 헤더를 이용해서 reverse() 함수 호출, reverse() 함수를 이용해서 문자열을 뒤집어 준다.ㄴ

  cout << str.begin() << endl;

  return 0;
}
