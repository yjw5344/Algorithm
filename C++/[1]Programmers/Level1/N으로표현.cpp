#include <string>
#include <vector>
#include <iostream>
using namespace std;

int answer = -1;

void dfs(int n, int pos, int num, int number){
	if (pos > 8)
		return;
	if (num == number) {
		if (pos < answer || answer == -1) {
			answer = pos;
		}
		return;
	}

	int nn = 0;

	for (int i = 0; i < 8; i++) {
		nn = nn * 10 + n;
		dfs(n, pos + 1 + i, num + nn, number);
		dfs(n, pos + 1 + i, num - nn, number);
		dfs(n, pos + 1 + i, num * nn, number);
		dfs(n, pos + 1 + i, num / nn, number);
	}
}

int solution(int N, int number) {
    dfs(N, 0, 0, number);
	return answer;
}

int main(){
  int answer = solution(5,12);
  cout << answer << endl;
  return 0;
}
