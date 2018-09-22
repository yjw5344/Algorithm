#include <iostream>
#include <vector>


using namespace std;

int main(){
  vector< vector <int> > tmp;
  vector<int> t;
  t.push_back(2);
  t.push_back(20);

  for(int i = 0 ; i<tmp.size() ; i++){
    cout << tmp.at(i) << endl;
  }
  cout << "=====" << endl;
  sort(tmp.begin(), tmp.end());

  tmp.erase(tmp.begin() + 3);

  for(int i = 0 ; i<tmp.size() ; i++){
    cout << tmp.at(i) << endl;
  }


  return 0;
}
