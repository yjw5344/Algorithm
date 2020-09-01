#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<int> a, vector<int> b){
  return a[2] < b[2];
}

int main(){
  vector< vector<int> > vec;

  vector<int> tmp;
  tmp.push_back(6);
  tmp.push_back(5);
  tmp.push_back(4);
  vec.push_back(tmp);

  tmp.clear();
  tmp.push_back(1);
  tmp.push_back(2);
  tmp.push_back(3);
  vec.push_back(tmp);

  tmp.clear();
  tmp.push_back(8);
  tmp.push_back(9);
  tmp.push_back(7);
  vec.push_back(tmp);

  for(int i = 0 ; i < vec.size() ; i++){
    for(int j = 0 ; j < vec[i].size() ; j++){
      cout << vec[i][j] << " ";
    }
    cout << endl;
  }

  cout << "sort" << endl;
  sort(vec.begin(), vec.end());

  for(int i = 0 ; i < vec.size() ; i++){
    for(int j = 0 ; j < vec[i].size() ; j++){
      cout << vec[i][j] << " ";
    }
    cout << endl;
  }


  return 0;
}
