#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;

    long long num = n;
    while(num){
      answer.push_back(num%10);
      num /= 10;
    }

    return answer;
}
