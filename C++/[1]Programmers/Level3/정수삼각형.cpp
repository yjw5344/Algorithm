#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector< vector<int> > triangle) {

  for(int i = 1; i < triangle.size() ; i++){
    triangle[i][0] = triangle[i - 1][0] + triangle[i][0];
    triangle[i][i] = triangle[i - 1][i - 1] + triangle[i][i];

    for(int j = 1; j < i; j++){
      int maxNum = max(triangle[i-1][j-1],triangle[i-1][j]);
      triangle[i][j] = maxNum + triangle[i][j];
    }
  }

  int answer = *max_element(triangle[triangle.size()-1].begin(),triangle[triangle.size()-1].end());
  return answer;
}

int main(){

  vector< vector<int> > triangle;

  vector<int> row;
  row.push_back(7);
  triangle.push_back(row);

  row.clear();
  row.push_back(3);
  row.push_back(8);
  triangle.push_back(row);

  row.clear();
  row.push_back(8);
  row.push_back(1);
  row.push_back(0);
  triangle.push_back(row);

  row.clear();
  row.push_back(2);
  row.push_back(7);
  row.push_back(4);
  row.push_back(4);
  triangle.push_back(row);

  row.clear();
  row.push_back(4);
  row.push_back(5);
  row.push_back(2);
  row.push_back(6);
  row.push_back(5);
  triangle.push_back(row);

  cout << solution(triangle) << endl;

  return 0;
}
