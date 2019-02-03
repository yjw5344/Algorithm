#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int p, int m, int d) {
  if(m > 9){
    return 3;
  }else{
    for(int k = 0 ; k < 100; k++){
      int t = p;
      for(int i = 0 ; i < m;i++){
        t = t * (1 + k * 0.01);
      }
      if(d <= t){
        return k;
      }
    }
  }
}

int main(){
  cout << solution(10000000, 9, 13000000) << endl;
  return 0;
}

// #include <iostream>
// #include <string>
// #include <vector>
// #include <math.h>
//
// using namespace std;
//
// int solution(int p, int m, int d) {
//     int k = 0;
//     while(true){
//         double money = (double)p;
//         money = money*pow((1.0 + (double)k/(100.0)), (double)m);
//         if(money >= (double)d) break;
//         k++;
//     }
//     int answer = k;
//     return answer;
// }
