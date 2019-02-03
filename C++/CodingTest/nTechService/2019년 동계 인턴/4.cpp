#include <iostream>
using namespace std;

long long solution(long long k)
{
  long long answer = 0;
  int sum = 0;
  for(int i = 1 ; i < k ; i++){
    sum += i;
    if(sum >= k){
      long long target = (k - sum + i);
      for(int j = 1 ; j <= i; j++){
        if( j == target){
          answer = j;
          break;
        }
      }
    }
  }
  return answer;
}

long long reSolution(long long k){
  long long answer = 0;
  long long total = 0;
  int indexCnt = 1;
  while(total < k){
    total += indexCnt;
    indexCnt++;
  }

  return (k - ((indexCnt - 1) * (indexCnt - 2) / 2));
}

int main(){

  cout << reSolution(11) << endl;

  return 0;
}
