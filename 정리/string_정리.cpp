#include <iostream>
#include <string>

using namespace std;

int main(){

  string str = "hello world";

  string tmp = str.substr(0,5);
  string tmp1 = str.substr(6,3);

  cout << tmp << endl;
  cout << tmp1 << endl;
  return 0;
}
