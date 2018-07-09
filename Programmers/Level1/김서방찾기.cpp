#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    for(int i = 0 ; i < seoul.size(); i++){
        if(seoul[i] == "Kim"){
            answer += "김서방은 ";
            answer += to_string(i);
            answer += "에 있다";
        }
    }
    return answer;
}


// int -> string
// to_string을 사용해서 정수를 문자열로 바꿔준다.
