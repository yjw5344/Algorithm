#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  vector< pair< int, double > > vec;

  vec.push_back(make_pair(3,0.3));
  vec.push_back(make_pair(13,0.13));
  vec.push_back(make_pair(23,0.23));
  vec.push_back(make_pair(1,0.1));
  vec.push_back(make_pair(7,0.7));
  vec.push_back(make_pair(2,0.2));

  for(int i = 0 ; i< vec.size() ; i++){
    cout << vec.at(i).first << " : " << vec.at(i).second << endl;
  }

  return 0;
}
