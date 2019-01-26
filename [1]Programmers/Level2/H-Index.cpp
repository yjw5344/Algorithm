#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
  sort(citations.begin(), citations.end(), greater<int>());

  for(int i = 0 ; i < citations.size() ; i++){
    if(citations.at(i) < i+1){
         return i;
     }
  }
}

int main(){

  vector<int> vec;
  vec.push_back(9);
  vec.push_back(7);
  vec.push_back(6);
  vec.push_back(2);
  vec.push_back(1);

  cout << solution(vec) << endl;
  return 0;
}
