// 백준 1463번
// 1로 만들기 문제

#include<iostream>

int main(){

  int num;
  int D[1000001] = {0,};
  scanf("%d",&num);

  D[0] = 0;
  D[1] = 0;


  for(int i = 2; i <= num;i++ ){
    D[i] = D[i-1] + 1;
    if(i % 2 == 0 && D[i] > D[i/2]+1){
      D[i] = D[i/2]+1;
    }
    if(i % 3 == 0 && D[i] > D[i/3]+1){
      D[i] = D[i/3]+1;
    }
  }

  printf("%d\n",D[num]);

  return 0;
}
