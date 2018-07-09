#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  cin >> s;

  if(s.length() % 2 == 0){
    cout << s[s.length()/2-1] << s[s.length()/2] << endl;
  }else{
    cout << s[s.length()/2] << endl;
  }
  return 0;
}
