#include <string>
#include <vector>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer;
    if( (sqrt(n) - (int)sqrt(n)) > 0 ){
      answer = -1;
    } else{
      answer = (long long)((int)sqrt(n)+1) * ((int)sqrt(n)+1);
    }
    return answer;
}
