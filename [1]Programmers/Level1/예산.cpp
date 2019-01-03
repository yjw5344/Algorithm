#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
  int sum = 0;
  int answer = 0;
  sort(d.begin(), d.end());
  for(auto i : d){
    sum += i;
    if(sum <= budget){
      answer++;
    }
  }
  return answer;
}
