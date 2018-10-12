#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	map<string, int> m;

	for (auto i : participant){
		m[i]++;
	}

	for (auto i : completion){
		m[i]--;
	}

	for (auto i : m){
		if (i.second == 1){
			answer = i.first;
		}
	}

	return answer;
}
