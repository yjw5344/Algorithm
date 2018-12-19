#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
  vector<vector<int>> answer;

  vector<int> sumArr;

  for(int i = 0 ; i < arr1.size(); i++){
    sumArr.clear();
    for(int j = 0 ; j < arr1[i].size() ; j++){
      int sum = arr1[i][j] + arr2[i][j];
      sumArr.push_back(sum);
    }
    answer.push_back(sumArr);
  }
  return answer;
}
