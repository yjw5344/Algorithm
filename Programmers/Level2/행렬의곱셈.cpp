#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
   	int arr1Row = arr1.size();
	int commonCnt = arr1.at(0).size();
	int arr2Col = arr2.at(0).size();

	vector<vector<int>> answer;
	answer.resize(arr1Row);
	for (int i = 0; i < arr1Row; i++){
		answer.at(i).resize(arr2Col);
	}

	for (int i = 0; i < arr1Row; i++){
		for (int j = 0; j < arr2Col; j++){
			for (int k = 0; k < commonCnt; k++){
				answer[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	return answer;
}
