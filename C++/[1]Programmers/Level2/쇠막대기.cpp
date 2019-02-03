#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(string arrangement) {
  stack<char> st;
  int answer = 0;

  for(int i = 0 ; i < arrangement.size() ; i++){
    if(arrangement.at(i) == '('){
      st.push(arrangement.at(i));
    }else{
      st.pop();
      if(arrangement.at(i-1) == '('){
        answer += st.size();
      }else if(arrangement.at(i-1) == ')'){
        answer++;
      }
    }
  }
  return answer;
}

int main(){
  string arrangement = "()(((()())(())()))(())";
  cout << solution(arrangement) << endl;
  return 0;
}
