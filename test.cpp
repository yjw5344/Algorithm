#include <iostream>
#include <math.h>

using namespace std;

int main(){
  long long num = 3;

  long long num1 = (long long)sqrt(num);

  int num2 = sqrt(num);


  cout << (long long)sqrt(num) << endl;
  cout << (double)sqrt(num) << endl;
  cout << (int)sqrt(num) << endl;
  cout << " ======= " << endl;
  cout << (sqrt(num) - (int)sqrt(num)) << endl;

  if((sqrt(num) - (int)sqrt(num)) > 0){
    cout << "!!!" << endl;
  }


  return 0;
}
