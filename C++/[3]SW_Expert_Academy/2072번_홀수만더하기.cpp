#include <iostream>
#include <vector>

using namespace std;

int main(){

  int numberOfTestcase;
  vector<int> testcaseResult;
  cin >> numberOfTestcase;

  for(int i = 0 ; i < numberOfTestcase ; i++){
    int eachTestcaseSum = 0;
    for(int j = 0 ; j < 10; j++){
      int inputNumber;
      cin >> inputNumber;

      if(inputNumber % 2 == 1){
        eachTestcaseSum += inputNumber;
      }
    }
    testcaseResult.push_back(eachTestcaseSum);
  }

  for(int i = 0 ; i < testcaseResult.size() ; i++){
    cout << "#" << (i+1) << " " << testcaseResult.at(i) << endl;
  }

  return 0;
 }
