#include <iostream>
#include <string>
using namespace std;

string solution(string s){
  for(int i = 0 ; i < s.size() ; i++){
    if(s.at(i) == '_'){
      string str = "";
      str += s.at(i+1) -32;
      s.replace(i,2,str);
      continue;
    }
    if( s.at(i) >= 'A' && s.at(i) <= 'Z'){
      string str = "";
      str += "_";
      str += s.at(i) + 32;
      s.replace(i,1,str);
    }
  }
  return s;
}

int main(){
  string test1 = "this_is_long_variable";
  string test2 = "thisIsLongVariable";

  cout << "test1 : " << test1 << endl;
  cout << "solution(test1) : " << solution(test1) << endl;

  cout << "test2 : " << test2 << endl;
  cout << "solution(test2) : " << solution(test2) << endl;

  return 0;
}
