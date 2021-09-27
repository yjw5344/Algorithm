#include<iostream>
#include <vector>
#include <string>
using namespace std;

void show(string t){
  char ch = 'A';

  cout << t.c_str() << endl;
  // char tm = t.c_str();
  // if(tm == ch){
  //   cout << "!";
  // } else{
  //   cout << "?";
  // }



}

int main(){
  // vector<string> vec;
  // vec.push_back("A");
  // vec.push_back("B");
  // vec.push_back("C");
  // vec.push_back("D");
  //
  // show(vec[0]);

  vector<int> vec;
  vec.resize(5);

  cout << vec.size() << endl;


  return 0;
}
