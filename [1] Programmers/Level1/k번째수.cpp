#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	for (auto i : commands){
		vector<int> result;
		for (int j = (i.at(0) - 1); j < i.at(1); j++){
			result.push_back(array.at(j));
		}
		sort(result.begin(), result.end());
		answer.push_back(result.at(i.at(2)-1));
	}
	return answer;
}
