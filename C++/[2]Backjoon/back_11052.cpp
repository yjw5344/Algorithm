// 백준 11052번
// 붕어빵 문제

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

  int n;
  int D[1001] = { 0 , };
  int P[10001] = { 0 , };

  scanf("%d",&n);
  for(int i = 1;i <= n; i++){
    scanf("%d",&P[i]);
  }

  for(int i = 1; i<= n ; i++){
    for(int j = 1; j <= i ; j++){
      D[i] = max(D[i], D[i-j] + P[j]);
    }
  }
  printf("%d\n",D[n]);
  return 0;
}

// 해설 !
// 만약에 붕어빵을 4개를 판다.
// 붕어빵 3개 팔 때와 붕어빵 1개를 팔 때,, D[3] + P[1]
// 붕어빵 2개를 팔 때와 붕어빵을 2개를 팔 때,, D[2] + P[2]
// 붕어빵을 1개를 팔고 붕어빵을 3개를 팔 때,, D[1] + P[3]
//
// 위와 같은 방법으로 다이나믹하게 생각하면 쉽게 문제를 해결 할 수 있다.
