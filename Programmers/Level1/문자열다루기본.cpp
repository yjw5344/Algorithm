#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
  bool answer = true;

  if(s.length() != 4 && s.length() != 6 ){
    answer = false;
  }
  for(int i = 0; i< s.length(); i++){
    if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')){
      answer = false;
      break;
    }
  }
  return answer;
}
