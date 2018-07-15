#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//============================================================
// 기본 문제
// -> 문자열 뒤집기 문제!
//============================================================

string solution(string s) {
    string answer = "";
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    answer = s;
    return answer;
}
