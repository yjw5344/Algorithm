#include <queue>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
  queue<int> work;
	vector<int> answer;
	for (int i = 0; i < progresses.size() ; i++){
		int n = 100 - progresses.at(i);
		work.push(ceil((double)n / speeds.at(i)));
	}

	int cur = work.front();
	int n = 1;
	work.pop();
	while (!work.empty()){
		if (work.front() <= cur){
			work.pop();
			n++;
		}
		else{
			answer.push_back(n);
			cur = work.front();
			work.pop();
			n = 1;
		}
	}
	answer.push_back(n);

	return answer;
}
