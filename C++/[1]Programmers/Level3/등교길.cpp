#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int m, int n, vector<vector<int> > puddles) {

  int arr[101][101] = { 0, };

  for(int i = 0 ; i < puddles.size() ; i++){
    arr[puddles[i][1]][puddles[i][0]] = -1;
  }

  arr[1][0] = 1;
  for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= m ; j++){
      if(arr[i][j] == -1){
        arr[i][j] = 0;
      }else{
        arr[i][j] = (arr[i-1][j] + arr[i][j-1]) % 1000000007;
      }
    }
  }

  return arr[n][m];
}

int main(){
  int m = 4;
  int n = 3;

  vector< vector<int> > puddles;

  vector<int> tmp;
  tmp.push_back(2);
  tmp.push_back(2);

  puddles.push_back(tmp);

  cout << solution(m,n,puddles) << endl;

  return 0;
}
