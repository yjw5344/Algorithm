#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(){
  int commmandLineCount;
  queue<int> q;
  cin >> commmandLineCount;
  for(int i = 0 ; i < commmandLineCount; i++){

    string commmandLine;
    cin >> commmandLine;

    if(commmandLine == "push"){
      int number;
      cin >> number;
      q.push(number);
    }else if(commmandLine == "pop"){
      if(q.empty()){
        cout << "-1" << endl;
      }else{
        cout << q.front() << endl;
        q.pop();
      }
    }else if(commmandLine == "size"){
      cout << q.size() << endl;
    }else if(commmandLine == "empty"){
      if(q.empty()){
        cout << "1" << endl;
      }else{
        cout << "0" << endl;
      }
    }else if(commmandLine == "front"){
      if(q.empty()){
        cout << "-1" << endl;
      }else{
        cout << q.front() << endl;
      }
    }else if(commmandLine == "back"){
      if(q.empty()){
        cout << "-1" << endl;
      }else{
        cout << q.back() << endl;
      }
    }
  }
  return 0;
}
