#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>
using namespace std;

string solution(string s) {

  s.at(0) = toupper(s.at(0));

  for(int i = 1 ; i < s.size() ; i++){
    if (s.at(i-1) == ' '){
      s.at(i) = toupper(s.at(i));
    }else{
      s.at(i) = tolower(s.at(i));
    }
  }

  return s;
}

int main(){
  string testCase1 = "3people unFollowed me";
  string testCase2 = "for the last week";

  cout << solution(testCase1) << endl;
  cout << solution(testCase2) << endl;

  return 0;
}
