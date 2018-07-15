// 내가 어렵게 푼 문제!
#include <string>
#include <vector>

using namespace std;

// 소수의 정의 : 1과 자기 자신만으로 나누어 떨어지는 숫자!
// 에라토스테네스 체 문제 !===========================================================
// 2 => 2는 소수이다. 2의 배수는 모두 2가 인수로 들어가기 때문에 소수가 될 수 없다.
// 3 => 3은 소수이다. 3의 배수는 모두 3이 인수로 들어가기 때문에 소수가 될 수 없다.
// 4 => 4는 2의 배수이기 때문에 소수가 될 수 없다.
// 5 => 5는 2와 3의 배수가 아니기 때문에 소수가 될 수 있다. 또한, 5의 배수는 모두 소수가 될 수 없다.
//
// 문제 해결 전략 -> n까지 숫자까지 중 소수를 모두 구하기 위해서 1~n까지 모두 초기화해준다.
//                그 후 소수 판별과 체를 걸러서 검사한다.
// =============================================================================

int solution(int n) {
    int answer = 0;

    vector<bool> primeNum;
    primeNum.resize(n+1);
    fill(primeNum.begin(), primeNum.end(),true);

    for (int i = 2; i < n+1; i++) {
        if (!primeNum.at(i)) {
            continue;
        }else {
            answer++;
            for (int j=1 ; i*j <= n; j++) {
                primeNum.at(i*j) = false;
            }
        }
    }
    return answer;
}
