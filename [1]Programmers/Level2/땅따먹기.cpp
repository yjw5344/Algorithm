#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector< vector<int> > land){

  int answer = 0;
  int line = land.size();

  for(int i = 1 ; i < line ; i++){
    for(int j = 0 ; j < 4 ; j++){
      vector<int> maxNum;
      for(int k = 0 ; k < 4 ; k++){
        if( j == k)
          continue;
        else{
          maxNum.push_back(land.at(i-1).at(k));
        }
      }
      int max = *max_element(maxNum.begin(), maxNum.end());
      land.at(i).at(j) = land.at(i).at(j) + max;
    }
  }

  vector<int> result;
  for(int i = 0 ; i < 4 ; i++){
    result.push_back(land.at(line-1).at(i));
  }
  answer = *max_element(result.begin(), result.end());
  return answer;
}

int main(){
  vector< vector<int> > arr;
  vector<int> row;
  row.push_back(1);
  row.push_back(2);
  row.push_back(3);
  row.push_back(5);
  arr.push_back(row);


  row.clear();
  row.push_back(5);
  row.push_back(6);
  row.push_back(7);
  row.push_back(8);
  arr.push_back(row);

  row.clear();
  row.push_back(4);
  row.push_back(3);
  row.push_back(2);
  row.push_back(1);
  arr.push_back(row);

  cout << solution(arr) << endl;
  return 0;
}
