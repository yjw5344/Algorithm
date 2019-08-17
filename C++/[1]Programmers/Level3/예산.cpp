#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> budgets, int M) {
  sort(budgets.begin(), budgets.end());
  int answer = 0;
  int left = 0;
  int right = budgets[budgets.size()-1];
  int temp = 0;

  while(right >= left){
    int mid = (left+right)/2;
    int valueSum = 0;

    for(int i = 0; i < budgets.size(); i++){
      if(mid > budgets[i]){
        valueSum += budgets[i];
      }else{
        valueSum += mid;
      }
    }

    if(valueSum > M){
      right = mid-1;
    }else{
      if(valueSum >= temp){
        temp = valueSum;
        answer = mid;
      }
      left = mid + 1;
    }
  }
  return answer;
}

int main(){
  vector<int> budgets;
  int M;

  M = 485;
  budgets.push_back(120);
  budgets.push_back(110);
  budgets.push_back(140);
  budgets.push_back(150);

  cout << solution(budgets, M) << endl;

  return 0;
}
