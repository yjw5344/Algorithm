#include<iostream>
#include<vector>


using namespace std;

int main(){

  vector<string> vec;
  vec.push_back("asd");
  vec.push_back("zxcv");

  for(int i = 0 ; i<vec.size() ; i++){
    cout << vec[i] << endl;
  }

  int i = 0%10;
  cout << i << endl;




	return 0;
}
