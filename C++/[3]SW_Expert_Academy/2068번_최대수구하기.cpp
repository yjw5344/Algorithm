#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  int testcase;
  vector< vector<int> > testcaseList;
  cin >> testcase;

  for(int i = 0 ; i < testcase; i++){
    vector<int> numberList;
    for(int j = 0 ; j < 10; j++){
      int inputNumber;
      cin >> inputNumber;
      numberList.push_back(inputNumber);
    }
    testcaseList.push_back(numberList);
  }

  for(int i = 0 ; i < testcase ; i++){
    cout << "#" << i+1 << " " ;
    cout <<*max_element(testcaseList.at(i).begin(), testcaseList.at(i).end()) << endl;
  }


  return 0;
}
