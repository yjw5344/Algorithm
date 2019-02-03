#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> D;
  int N;

  D.resize(100001);
  cin >> N;

  for(int i = 1 ; i <= N ; i++){
    for(int j = 1 ; j*j <= i ; j++){
      if(D[i] > D[i - j*j] + 1|| D[i] == 0){
        D[i] = D[i-j*j] + 1;
      }
    }
  }

  cout << D[N] << endl;
  return 0;
}
