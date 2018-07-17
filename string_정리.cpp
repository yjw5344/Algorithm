#include<iostream>
#include<string>   // string 헤더 호출
#include<algorithm>

using namespace std;

bool compare(string a, string b){
  // 사용자에 맞게 변형하여서 정렬한다.
  return a < b;
}

int main(){

  // string 문자열 선언
  string str = "hello world";

  cout << str << endl;

  reverse(str.begin(), str.end());
  // #include<algorithm> 헤더를 이용해서 reverse() 함수 호출, reverse() 함수를 이용해서 문자열을 뒤집어 준다.

  cout << str.begin() << endl;

  // ## 정렬 하는 방법!
  sort(str.begin(), str.end());                   // default 세팅 -> 오름차순 정렬
  sort(str.begin(), str.end(),greater<string>())  // sort(v.begin(), v.end(), greater<자료형>()) -> 내림차순
  sort(v.begin(), v.end(), compare);              // 사용자 정의 함수 사용하여 정렬

  return 0;
}
