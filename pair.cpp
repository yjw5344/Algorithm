#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){

  pair< int, double >tmp;


  tmp.make_pair(3,0.3);
  tmp.make_pair(13,0.13);
  tmp.make_pair(23,0.23);
  tmp.make_pair(1,0.1);
  tmp.make_pair(7,0.7);
  tmp.make_pair(2,0.2);

  sort(tmp.begin(), tmp.end());

  for(int i = 0 ; i< tmp.size() ; i++){
    cout << tmp.at(i).first << tmp.at(i).second << endl;
  }







  return 0;
}
