#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
  vector<string> tmp;

  tmp.push_back("show");
  tmp.push_back("me");
  tmp.push_back("the");
  tmp.push_back("money");


  cout << tmp[0] << endl;
  cout << tmp[1] << endl;
  cout << tmp[2] << endl;
  cout << tmp[3] << endl;
  cout << tmp.size() << endl;
  cout << tmp.at(0)[0] << endl;
  cout << tmp[0][1] << endl;
  cout << tmp[0][2] << endl;

  // for(int i=0; i< tmp.size() ; i++){
  //   for(int j = 0 ; tmp[i].length() ; j++){
  //     if(j == 0 ){
  //       cout << tmp[i].at(j) << endl;
  //     }
  //   }
  // }



  return 0;
}
