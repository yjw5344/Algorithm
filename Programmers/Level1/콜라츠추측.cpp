#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int count = 0;

    //  변수를 long long으로 해야 범위 안에 들어와서 정답을 맞출 수 있음!
    int number = num;

    while(number != 1 ){
      count++;
      if(count > 500){
        return -1;
      }
      if(number % 2 == 0 ){
        number = number / 2;
      }else{
        number = number * 3 + 1;
      }
    }
    return count;
}
