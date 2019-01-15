#include <iostream>
#include <string>
#include <vector>
using namespace std;

int answer = 0;
void dfs(vector<int> numbers, int target, int depth ){
  int numbersLen = numbers.size();
  if(depth == numbersLen){
    int sum = 0;
    for(int i = 0 ; i < numbersLen ; i++){
      sum += numbers.at(i);
    }
    if(sum == target){
      answer++;
    }
  }else{
    // 인덱스의 숫자가 양수인 경우
    numbers.at(depth) = numbers.at(depth) * 1;
    dfs(numbers, target, depth+1);

    // 인덱스의 숫자가 음수인 경우
    numbers.at(depth) = numbers.at(depth) * (-1);
    dfs(numbers, target, depth+1);
  }
}

int solution(vector<int> numbers, int target) {
  dfs(numbers, target, 0);
  return answer;
}

int main(){
  vector<int> testArr;
  int target = 3;
  testArr.push_back(1);
  testArr.push_back(1);
  testArr.push_back(1);
  testArr.push_back(1);
  testArr.push_back(1);

  cout << solution(testArr, target) << endl;

  return 0;
}
