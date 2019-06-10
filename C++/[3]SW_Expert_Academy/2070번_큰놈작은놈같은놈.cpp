#include <iostream>
#include <vector>
using namespace std;

int main(){
  int testcase;
  int firstNumber;
  int secondeNumber;
  cin >> testcase;

  char resultArr[testcase];

  for(int i = 0 ; i < testcase ; i++){
    cin >> firstNumber;
    cin >> secondeNumber;
    if(firstNumber > secondeNumber){
      resultArr[i] = '>';
    }else if(firstNumber == secondeNumber){
      resultArr[i] = '=';
    }else{
      resultArr[i] = '<';
    }
  }

  for(int i = 0 ; i < testcase; i++){
    cout << "#" << i+1 << " " << resultArr[i] << endl;
  }
  return 0;
}
