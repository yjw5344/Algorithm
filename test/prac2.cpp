#include<iostream>

using namespace std;

int main() {

  bool A = true;
  bool B = true;
  bool C = false;

  if( A == true && C != true) {
    cout << "1" << endl;
  } else if( B == true && C != true) {
    cout << "2" << endl;
  }



  return 0;
}
