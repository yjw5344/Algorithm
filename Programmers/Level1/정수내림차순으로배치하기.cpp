#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;

    vector<int> result;
    long long q = n;

    while(q){
      result.push_back(q%10);
      q /= 10;
    }

    sort(result.begin(), result.end(),greater<int>());

    for(int i = 0; i < result.size(); i++){
      answer += result[i] * pow(10,(result.size() - i - 1));
    }
    return answer;
}
