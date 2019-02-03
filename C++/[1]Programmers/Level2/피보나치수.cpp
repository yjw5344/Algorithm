#include <string>
#include <vector>

using namespace std;

// int pibo(int num){
//   if(num == 0){
//     return 0;
//   }else if(num == 1){
//     return 1;
//   }else{
//     return pibo(num-2) + pibo(num-1);
//   }
// }

int solution(int n) {

  vector<long long> pibo;
  pibo.resize(n+1);
  pibo.at(0) = 0;
  pibo.at(1) = 1;

  for(int i = 2; i <= n ; i++){
    pibo.at(i) = (pibo.at(i-2) + pibo.at(i-1)) % 1234567;
  }

  return pibo.at(n);
}
