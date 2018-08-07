// 괄호 문제 !!!
// Stack을 활용하는 문제!
#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    stack<char> words;


    for(int i = 0 ; i < s.length() ; i++){
      if(s[i] == '('){
        words.push('(');
      }else if(s[i] == ')'){
        if(words.empty()){
          answer = false;
          break;
        }else{
          if(words.top() == '('){
            words.pop();
          }
        }
      }
    }

    if(!words.empty()){
      answer = false;
    }

    return answer;
}
