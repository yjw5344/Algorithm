#include <iostream>
using namespace std;

int checkMin(int a, int b, int c) {
    return (a > b) ? ((b > c) ? c : b) : ((a > c) ? c : a);
}

int main(){
  int num1 = 10;
  int num2 = 100;
  int num3 = 1000;

  cout << checkMin(num1, num2, num3) << endl;
  return 0;
}
