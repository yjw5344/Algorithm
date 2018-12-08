// 아직 다 못 푼 문제
#include <string>
#include <vector>

#include <iostream>
using namespace std;

vector<int> solution(vector<int> prices) {
  vector<int> answer;
  for(int i = 0 ; i < prices.size(); i++ ){
    int originalNum = prices.at(i);
    int cnt = 0;
    for(int j = i ; j < prices.size(); j++){
      int compareNum = prices.at(j);
      if( originalNum != compareNum){
        cnt++;
        if(originalNum > compareNum){
          answer.push_back(cnt);
          break;
        }
      }
    }
  }
  return answer;
}

int main(){
  vector<int> arr;
  arr.push_back(498);
  arr.push_back(501);
  arr.push_back(470);
  arr.push_back(489);

  vector<int> result = solution(arr);
  for( auto i : result)
    cout << i << endl;

  return 0;
}
