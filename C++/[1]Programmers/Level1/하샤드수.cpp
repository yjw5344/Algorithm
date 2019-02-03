#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;

    int q = x;
    int sum = 0;

    while(q){
      sum += q%10;
      q /= 10;
    }

    if( x % sum == 0){
      answer = true;
    }else{
      answer = false;
    }
    return answer;
}
