#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
	answer.resize(heights.size());
	reverse(heights.begin(), heights.end());

	for (int i = 0; i < heights.size(); i++){
		for (int j = i + 1; j < heights.size(); j++){
			if (heights.at(i) < heights.at(j)){
				answer.at(i) = heights.size() - j;
				break;
			}
		}
	}

	reverse(answer.begin(), answer.end());
	return answer;
}
