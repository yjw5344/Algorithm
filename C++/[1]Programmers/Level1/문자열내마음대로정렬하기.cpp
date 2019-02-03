// 문자열 정렬 문제!
// sort() 믄제!
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int index;

bool indexSort(string a, string b){
  if(a.at(index) != b.at(index)){
    return a.at(index) < b.at(index);
  }
  return a < b;
}

vector<string> solution(vector<string> strings, int n) {
  vector<string> answer = strings;
  index = n;
  sort(answer.begin(), answer.end(), indexSort);
  return answer;
}
