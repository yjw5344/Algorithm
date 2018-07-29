#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;

    while(n){
      answer = answer + (n % 10);
      n = n / 10;
    }
    return answer;
}
