#include<string>
#include<iostream>

using namespace std;

int main(){
  string str = "hello world";
  if(str.find("world") == str.npos){
    cout << "true" << endl;
  }
  return 0;
}
