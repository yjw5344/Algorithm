#include <vector>

using namespace std;

long long solution(int N) {
	long long answer = 0;
	vector<int> result;
	result.resize(N+1);

	for (int i = 2; i <= N; i++){
		if (result.at(i) == 0){
			for (int j = 2; i*j <= N; j++){
				result.at(i*j) = 1;
			}
		}
	}

	for (int i = 2; i < result.size(); i++){
		if (result.at(i) == 0)
			answer += i;
	}
	return answer;
}
