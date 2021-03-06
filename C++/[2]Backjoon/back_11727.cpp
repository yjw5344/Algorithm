// 백준 11727번
// 2xn타일2

#include<iostream>
using namespace std;

int main(){

  int D[1001] = {0,};
  int n;
  scanf("%d",&n);

  D[0] = 1;
  D[1] = 1;

  for(int i=2; i <= n ; i++){
    D[i] = D[i-1] + 2*D[i-2];
    D[i] = D[i] % 10007;
  }
  cout << D[n] << endl;

  return 0;
}
