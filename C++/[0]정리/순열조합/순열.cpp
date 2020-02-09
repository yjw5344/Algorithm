#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  // 단순한 순열
  vector<int> vec;
  vec.push_back(4);
  vec.push_back(6);
  vec.push_back(2);
  vec.push_back(1);


  for(int i = 0 ; i < vec.size() ; i++){
    cout << "[index : " << i << "] : " << vec[i] << endl;
  }

  cout << "---- next_permutation 순열 ----" << endl;

  // next_permutaion을 이용한 순열 구하기
  sort(vec.begin(), vec.end());
  // next_permutation은 인덱스을 기준으로 순열을 뽑아서, 사전에 정렬이 되어 있어야된다.
  // 그래서, next_permutaion의 경우는 오름차순 기준으로 순열을 뽑고
  // prev_permutation의 경우는 내림차순으로 순열을 뽑는다.
  do{
    for(int i = 0 ; i < vec.size() ; i++){
      cout << vec[i] << " ";
    }
    cout << endl;
  }while(next_permutation(vec.begin(), vec.end()));

  return 0;
}
