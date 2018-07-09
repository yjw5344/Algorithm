// 백준 9095번
// 1,2,3 더하기

#include<iostream>
using namespace std;

int main(){

  int n;
  int D[11];
  int testCase;

  D[0] = 1;
  D[1] = 1;
  D[2] = 2;

  for(int i = 3 ; i < 11 ; i++ ){
    D[i] = D[i-1] + D[i-2] + D[i-3];
  }

  // for(int i = 3 ; i < 11 ; i++ ){
  //   if (i-1 >= 0) {
  //       D[i] += D[i-1];
  //   }
  //   if (i-2 >= 0) {
  //     D[i] += D[i-2];
  //   }
  //   if (i-3 >= 0) {
  //     D[i] += D[i-3];
  //   }
  // }
  scanf("%d",&testCase);
  while(testCase--){
    scanf("%d",&n);
    printf("%d\n",D[n]);
  }

  return 0;
}
