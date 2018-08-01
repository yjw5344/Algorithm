#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int main(){

  bitset<8> test(4);

  // #includse<bitset>
  // bitset<표현하고자하는 비트 자릿수> 변수명( 변환하고자하는 숫자)
  // ex) bitset<8> num(3) => 8자리비트 숫자로 3을 변환하여 표현하고자 한다.
  //
  // 부가적인 함수 변수명.count(); => 2진수의 1의 갯수를 반환한다.



  cout << test << endl;
  cout << test.count() << endl;


  return 0;
}
