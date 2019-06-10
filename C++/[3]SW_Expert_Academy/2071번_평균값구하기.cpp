#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
  int numberOfTestcase;
  vector<int> testcaseResult;
  cin >> numberOfTestcase;

  for(int i = 0 ; i < numberOfTestcase ; i++){
    int eachTestcaseTotal = 0;
    for(int j = 0 ; j < 10; j++){
      int inputNumber;
      cin >> inputNumber;
      eachTestcaseTotal += inputNumber;
    }
    testcaseResult.push_back(eachTestcaseTotal);
  }

  for(int i = 0 ; i < testcaseResult.size() ; i++){
    int result = floor((testcaseResult.at(i)/10.0) + 0.5);
    cout << "#" << (i+1) << " " << result << endl;
  }


  return 0;
}
