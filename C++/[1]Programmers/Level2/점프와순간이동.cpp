#include <iostream>
using namespace std;

int solution(int n) {
  int answer = 0;
  while(n != 0) {
    if(n%2==0){
      n = n/2;
    } else{
      n = n-1;
      answer++;
    }
  }
  return answer;
}

int main(){
  int n1 = 5;
  int n2 = 5000;
  cout << solution(n1) << endl;
  cout << solution(n2) << endl;
  return 0;
}
