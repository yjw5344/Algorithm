#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {

  string answer = "";
  vector<int> numbers;
  int index = 0;

  for(int i = 0 ; i < s.length() ; i++){

    if( i != s.length() - 1){
      if(s[i] == ' '){
        numbers.push_back(stoi(s.substr(index,i)));
        index = i + 1;
      }else{
        continue;
      }
    }else{
      numbers.push_back(stoi(s.substr(index,i+1)));
    }
  }

  sort(numbers.begin(), numbers.end());

  answer += to_string(numbers.at(0));
  answer += " ";
  answer += to_string(numbers.at(numbers.size()-1));

  return answer;
}
