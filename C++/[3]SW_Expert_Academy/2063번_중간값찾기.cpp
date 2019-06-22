#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

  vector<int> numberList;
  int numberSize;
  cin >> numberSize;

  for(int i = 0 ; i < numberSize ; i++){
    int tempNumber;
    cin >> tempNumber;
    numberList.push_back(tempNumber);
  }

  sort(numberList.begin(), numberList.end());
  cout << numberList.at(numberList.size()/2) << endl;

  return 0;
}
