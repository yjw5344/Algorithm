#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    vector<int> numberBox;

    for(int i = 0 ; i < operations.size() ; i++){
      string eachOperation = operations.at(i);
      int number = stoi(eachOperation.substr(2));

      if(eachOperation[0] == 'I'){
        numberBox.push_back(number);
      }else if(eachOperation[0] == 'D'){
        if(numberBox.empty()){
          continue;
        }else{
          sort(numberBox.begin(), numberBox.end());
          if(number == 1){
            numberBox.erase(numberBox.begin()+(numberBox.size()-1));
          }else if( number == -1){
            numberBox.erase(numberBox.begin()+0);
          }
        }
      }
    }

    if(numberBox.empty()){
      answer.push_back(0);
      answer.push_back(0);
      return answer;
    }else{
      sort(numberBox.begin(), numberBox.end());
      answer.push_back(numberBox.back());
      answer.push_back(numberBox[0]);
      return answer;
    }
}

int main(){
  vector<string> operations;

  // <case 1>
  // operations.push_back("I 16");
  // operations.push_back("I -5643");
  // operations.push_back("D -1");
  // operations.push_back("D 1");
  // operations.push_back("D 1");
  // operations.push_back("I 123");
  // operations.push_back("D -1");
  // 기댓값 〉	[0, 0]

  // <case 2>
  operations.push_back("I -45");
  operations.push_back("I 653");
  operations.push_back("D 1");
  operations.push_back("I -642");
  operations.push_back("I 45");
  operations.push_back("I 97");
  operations.push_back("D 1");
  operations.push_back("D -1");
  operations.push_back("I 333");
 // 기댓값 〉	[333, -45]


  vector<int> answer = solution(operations);
  cout << answer.at(0) << ", " << answer.at(1) << endl;

  return 0;
}
