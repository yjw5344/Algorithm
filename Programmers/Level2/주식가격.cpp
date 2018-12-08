#include <string>
#include <vector>

#include <iostream>
using namespace std;

vector<int> solution(vector<int> prices) {
  vector<int> answer;
  answer.resize(prices.size());

  for(int i = 0 ; i < prices.size() ; i++){
    int cnt = 0;
    int pNum = prices.at(i);
    for(int j = i+1 ; j < prices.size();j++){
      int cNum = prices.at(j);
      cnt++;
      if(j == (prices.size()-1)){
        break;
      }else{
        if(cNum < pNum){
          break;
        }
      }
    }
    answer.at(i) = cnt;
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
