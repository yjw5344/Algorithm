#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int checkMin(int a, int b, int c) {
    return (a > b) ? ((b > c) ? c : b) : ((a > c) ? c : a);
}

int solution(vector< vector<int> > board)
{
    int answer = 0;
    int rowSize = board.size();
    int colSize = board.at(0).size();

    for(int row = 1 ; row < rowSize ; row++){
        for(int col = 1 ; col < colSize ; col++){
            if( board.at(row).at(col) != 0) {
                int minNum = checkMin(board.at(row-1).at(col-1), board.at(row-1).at(col), board.at(row).at(col-1)) + 1;
                board.at(row).at(col) = minNum;
            }
        }
    }

    vector<int> maxArr;
    for(int i = 0; i < rowSize ; i++){
        for(int j = 0 ; j < colSize ; j++)
            maxArr.push_back(board.at(i).at(j));
    }
    answer = *max_element(maxArr.begin(), maxArr.end());
    return answer*answer;
}

int main(){

  vector<int> arr1;
  arr1.push_back(0);
  arr1.push_back(1);
  arr1.push_back(1);
  arr1.push_back(1);

  vector<int> arr2;
  arr2.push_back(1);
  arr2.push_back(1);
  arr2.push_back(1);
  arr2.push_back(1);

  vector<int> arr3;
  arr3.push_back(1);
  arr3.push_back(1);
  arr3.push_back(1);
  arr3.push_back(1);

  vector<int> arr4;
  arr4.push_back(0);
  arr4.push_back(0);
  arr4.push_back(1);
  arr4.push_back(0);

  vector< vector<int> > tmp;
  tmp.push_back(arr1);
  tmp.push_back(arr2);
  tmp.push_back(arr3);
  tmp.push_back(arr4);

  cout << solution(tmp) << endl;

  return 0;
}
