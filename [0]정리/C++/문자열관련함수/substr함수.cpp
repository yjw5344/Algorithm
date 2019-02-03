#include <iostream>
#include <string>

using namespace std;

int main(){

  string str = "hello world";

  string tmp = str.substr(0,5);
  string tmp1 = str.substr(6,3);

  /*
    * 설명 *
    substr(index1, index2); => 문자열을 자르는 용도의 흠수
    index1 -> 시작 인덱스를 의미한다.
    index2 -> 자르기 위한 인덱스 크기를 의미한다.
  */

  cout << tmp << endl;
  cout << tmp1 << endl;
  return 0;
}
