#include <iostream>
using namespace std;

int solution(int n, int a, int b) {
    int answer = 0;
    while (a != b) {
      if (a % 2 == 0) {
        a /= 2;
      } else {
        a /= 2;
        a+=1;
      }
      if (b % 2 == 0){
        b /= 2;
      } else {
        b /= 2;
        b+=1;
      }
      answer++;
    }
    return answer;
}

int main(){
  int n = 8;
  int a = 4;
  int b = 7;

  cout << solution(n,a,b) << endl;
  return 0;
}
