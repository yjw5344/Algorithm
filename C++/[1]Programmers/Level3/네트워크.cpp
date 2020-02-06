#include <iostream>
#include <string>
#include <vector>

using namespace std;

int visitCheck[201] = {0, };

void dfs(int current, int n, vector< vector<int> > computers) {
  visitCheck[current+1] = 1;
  for(int i = 0 ; i < n ; i++){
    if( visitCheck[i+1] == 0 && computers[current][i] == 1){
      dfs(i,n,computers);
    }
  }
}

int solution(int n, vector< vector<int> > computers) {
  int answer = 0;
  for(int i = 0 ; i < n ; i++) {
    if(visitCheck[i+1] == 0){
      answer += 1;
      dfs(i,n,computers);
    }
  }
  return answer;
}

int main(){
  int n = 3;
  vector< vector<int> > computers;

  // case 01
  // vector<int> row;
  // row.push_back(1);
  // row.push_back(1);
  // row.push_back(0);
  // computers.push_back(row);
  //
  // row.clear();
  // row.push_back(1);
  // row.push_back(1);
  // row.push_back(0);
  // computers.push_back(row);
  //
  // row.clear();
  // row.push_back(0);
  // row.push_back(0);
  // row.push_back(1);
  // computers.push_back(row);

  // case 02
  vector<int> row;
  row.push_back(1);
  row.push_back(1);
  row.push_back(0);
  computers.push_back(row);

  row.clear();
  row.push_back(1);
  row.push_back(1);
  row.push_back(1);
  computers.push_back(row);

  row.clear();
  row.push_back(0);
  row.push_back(1);
  row.push_back(1);
  computers.push_back(row);

  cout << solution(n, computers) << endl;
  return 0;
}
