#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {

  vector<int> result;
  result.push_back(0);
  result.push_back(0);
  result.push_back(0);

  vector<int> person1 = {1,2,3,4,5};
  vector<int> person2 = {2,1,2,3,2,4,2,5};
  vector<int> person3 = {3,3,1,1,2,2,4,4,5,5};

  for(int i = 0 ; i < answers.size() ; i++){
    if(answers.at(i) == person1.at(i%5)){
      result.at(0)++;
    }
    if(answers.at(i) == person2.at(i%8)){
      result.at(1)++;
    }
    if(answers.at(i) == person3.at(i%10)){
      result.at(2)++;
    }
  }
  vector<int> answer;
  int max = *max_element(result.begin(), result.end());
  for(int i = 0 ; i < result.size() ; i++){
    if(result.at(i) == max)
      answer.push_back((i+1));
  }
  return answer;
}
