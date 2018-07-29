#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;

    int a = n;
    int b = m;

    while(b != 0){
      int r = a % b;
      a = b;
      b = r;
    }
    answer.push_back(a);
    answer.push_back(n*m/a);

    return answer;
}

//** 주어진 두 수가 a, b 일 때,,

//** 최대 공약수 구하는 방법
//** => 유클리드 호제법을 이용
//** => 큰 수(a)를 작은 수(b)로 나누었을 때, 나누어 떨어지면 최대공약수는 b
//** => 큰 수(a)를 작은 수(b)로 나누었을 때, 나머지가 R이면 => R과 b의 최대공약수이다.

//** 최소 공배수 구화는 방법
//** => a x b / 최대공약수
