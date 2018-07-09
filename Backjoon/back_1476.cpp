// 백준 1476번
// 날짜 계산

#include<iostream>
using namespace std;

int main(){
  int e,s,m;
  int y = 1;
  int mm =1;
  int ss = 1;
  int ee = 1;

  scanf("%d %d %d",&e,&s,&m);

  while(true){

    if(e == ee &&  s == ss && m == mm){
      printf("%d\n",y);
      break;
    }

    ee += 1;
    ss += 1;
    mm += 1;

    if(ee == 16)
      ee = 1;
    if(ss == 29)
      ss = 1;
    if(mm == 20)
      mm = 1;
    y++;
  }

  return 0;
}
