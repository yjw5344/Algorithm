#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int sum;
    for(int i = 1 ; i <= n ; i++){
      sum = 0;
      for(int j = i ; j <= n ; j++){
        sum += j;
        if(sum == n){
          answer++;
        }else if(sum > n){
          break;
        }
      }
    }
    return answer;
}
