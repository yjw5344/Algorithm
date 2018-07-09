#include<stdio.h>

int main(){

  int gram;
  int count = 0;
  scanf("%d",&gram);

  // 5kg으로 배달이 되는지 확인
  // 5kg 3kg의 조합으로 배달이 되는지
  while(1){
    if(gram%5 == 0){
      printf("%d\n",gram/5+count);
      break;
    } else if(gram <= 0){
      printf("-1\n");
      break;
    }

    gram -= 3;
    count++;
  }

  return 0;
}
