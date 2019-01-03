#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	int count = 0;

	queue< pair<int, int> > q;
	priority_queue <int> pq;

	for (int i = 0; i < priorities.size(); i++) {
		q.push(make_pair(i, priorities.at(i)));
		pq.push(priorities.at(i));
	}

	while (!q.empty()) {
		int idx = q.front().first;
		int val = q.front().second;
		q.pop();

		if (pq.top() == val) {
			pq.pop();
			count++;
			if (idx == location) {
				answer = count;
				break;
			}
		}
		else {
			q.push(make_pair(idx, val));
		}
	}
	return answer;
}

int main(){
  vector<int> arr;
  arr.push_back(1);
  arr.push_back(1);
  arr.push_back(9);
  arr.push_back(1);
  arr.push_back(1);
  arr.push_back(1);

  int location = 0;

  cout << solution(arr, location) << endl;


  return 0;
}
