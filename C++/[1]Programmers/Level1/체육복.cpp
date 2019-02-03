#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
	vector<int> student;
	student.resize(n+2);

	for (int i = 1; i < (student.size() - 1) ; i++)
		student.at(i) = 1;

	for (int i = 0; i < reserve.size(); i++){
		student.at(reserve.at(i))++;
	}

	for (int i = 0; i < lost.size(); i++){
		student.at(lost.at(i))--;
	}

	for (int i = 0; i < lost.size(); i++){
		if (student.at(lost.at(i)) != 0)
			continue;

		if (student.at(lost.at(i) - 1) == 2){
			student.at(lost.at(i)) = 1;
			student.at(lost.at(i) - 1) = 1;
			continue;

		}

		if (student.at(lost.at(i) + 1) == 2){
			student.at(lost.at(i)) = 1;
			student.at(lost.at(i) + 1) = 1;
		}
	}

	for (int i = 1; i < student.size() - 1; i++){
		if (student.at(i) != 0)
			answer++;
	}

	return answer;
}
