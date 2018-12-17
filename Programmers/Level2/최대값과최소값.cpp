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


//  다른 사람 코드 참고!!!
// while (true)
// {
//     int pos = s.find(" ");
//     szTemp = s.substr(0, pos);
//     s = s.substr(pos + 1);
//     nMinMax.first = min(nMinMax.first, stoi(szTemp));
//     nMinMax.second = max(nMinMax.second, stoi(szTemp));
//
//     if (pos == s.npos)
//         break;
// }
