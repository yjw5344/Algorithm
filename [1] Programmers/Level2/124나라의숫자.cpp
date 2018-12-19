#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int n) {
  string result = "";
  string numList[] = {"4","1","2"};

  while(n > 0){
    int r = n % 3;
    n = n / 3;
    if(r == 0){
      n--;
    }
    result += numList[r];
  }
  reverse(result.begin(), result.end());
  return result;
}
