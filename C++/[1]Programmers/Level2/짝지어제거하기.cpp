#include <iostream>
#include <string>
#include <stack>
using namespace std;

int solution(string s) {
    int answer = 0;
    stack<int> charStack;

    for(int i = 0 ; i < s.size() ; i++){
      if(charStack.empty()){
        charStack.push(s.at(i));
      }else{
        if(charStack.top() == s.at(i)){
          charStack.pop();
        }else{
          charStack.push(s.at(i));
        }
      }
    }

    if(charStack.empty()){
      answer = 1;
    }else{
      answer = 0;
    }

    return answer;
}

int main(){
  string s1 = "baabaa";
  string s2 = "cdcd";

  cout << "solution(s1) : ";
  cout << solution(s1) << endl;
  cout << endl;
  cout << "solution(s2) : ";
  cout << solution(s2) << endl;

  return 0;
}
