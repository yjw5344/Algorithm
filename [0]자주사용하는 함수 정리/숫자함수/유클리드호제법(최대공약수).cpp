#include <iostream>
using namespace std;

int gcd(int a, int b){
  // 최대공약수 구하기!
  while( b != 0){
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main(){
  int n1 = 6;
  int n2 = 9;
  cout << gcd(n1, n2) << endl;
  return 0;
}

//  최소공배수 구하는 방법
//
//  2가지의 숫자 : a, b가 존재
//  a x b = 최소공배수 x 최대공약수
// 최소공배수 = (a x b) / 최대공약수
