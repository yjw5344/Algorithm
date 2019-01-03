#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    int index = 0;

    for(int i = 0 ; i < s.length() ; i++){
      if(s[i] == ' '){
        index = 0;
        answer.append(" ");
      }else{
        if(index % 2 == 0){
          if(islower(s[i])){
            answer += (s[i] -= 32);
          }else{
            answer += s[i];
          }
        }else{
          if(isupper(s[i])){
            answer += (s[i] += 32);
          }else{
            answer += s[i];
          }
        }
        index++;
      }
    }
    return answer;
}
