#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    for(int i = 0 ; i < s.length(); i++){
      s[i] += n;
      if(s[i] > 'z' || s[i] > 'Z'){
        s[i] -= 26;
      }

    }
    return s;
}
