#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for(int i = 0 ; i < s.length(); i++){
      if(islower(s[i])){
        s[i] += n;
        if(!islower(s[i])){
          s[i] -= 26;
        }
      }

      if(isupper(s[i])){
        s[i] += n;
        if(!isupper(s[i])){
          s[i] -= 26;
        }
      }
    }
    return s;
}
