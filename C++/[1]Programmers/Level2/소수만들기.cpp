#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int checkPrime[3001];

    for(int i = 0 ; i < 3001; i++){
      checkPrime[i] = i;
    }

    for(int i = 2 ; i < 3001; i++){
      if (checkPrime[i] == 0){
        continue;   // 이미 체크된 수의 배수는 확인하지 않는다
      }else{
        for (int j = i + i; j < 3001; j+=i) {
          checkPrime[j] = 0;   // i를 제외한 i의 배수들은 0으로 체크
        }
      }
    }

    int numsSize = nums.size();
    for(int i = 0; i < numsSize-2 ; i++){
      for(int j = i+1 ; j < numsSize - 1 ; j++){
        for(int k = j+1 ; k < numsSize ; k++){
          int sum = nums.at(i)+nums.at(j)+nums.at(k);
          if(checkPrime[sum] != 0){
            answer++;
          }
        }
      }
    }
    return answer;
}

int main(){
  vector<int> vec1;
  vector<int> vec2;

  vec1.push_back(1);
  vec1.push_back(2);
  vec1.push_back(3);
  vec1.push_back(4);

  vec2.push_back(1);
  vec2.push_back(2);
  vec2.push_back(7);
  vec2.push_back(6);
  vec2.push_back(4);

  cout << "Solution1 : " << solution(vec1) << endl;
  cout << "Solution2 : " << solution(vec2) << endl;

  return 0;
}
