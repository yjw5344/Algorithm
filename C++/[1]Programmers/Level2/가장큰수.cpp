#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string &a, string &b){
  if(a+b > b+a){
    return true;
  }else{
    return false;
  }
}

string solution(vector<int> numbers) {
  string answer = "";
  vector<string> stringNumbers;

  for(auto i : numbers){
    stringNumbers.push_back(to_string(i));
  }

  sort(stringNumbers.begin(), stringNumbers.end(), compare);

  for(auto i : stringNumbers){
    answer += i;
  }

  if(answer.at(0) == '0')
    return 0;
  return answer;
}

int main(){

  vector<int> vec1;
  vec1.push_back(3);
  vec1.push_back(30);
  vec1.push_back(34);
  vec1.push_back(5);
  vec1.push_back(9);

  vector<int> vec2;
  vec2.push_back(6);
  vec2.push_back(10);
  vec2.push_back(2);

  cout << solution(vec1) << endl;

  return 0;
}
