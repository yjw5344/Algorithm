#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){

  string answer = "";
  vector<string> result;
  result.push_back("Jane");
  result.push_back("Kim");

  for(int i = 0 ; i < result.size(); i++){
    if(result[i] == "Kim"){
      answer += "김서방은 ";
      answer += to_string(i);
      answer += "에 있다";
    }
  }
  cout << answer << endl;
  return 0;
}
