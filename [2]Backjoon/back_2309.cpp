// 백준 2309번
// 일곱 난쟁이 문제!

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int arr[9];
  int sum = 0;

  for(int i = 0; i<9;i++){
    scanf("%d",&arr[i]);
    sum += arr[i];
  }

  // 배열 arr정렬하기 !
  // 정렬하는 방법은 algorithm헤더를 불러와서 sort()함수를 이용해서 소팅한다.
  sort(arr,arr+9);

  for(int i = 0 ; i<9;i++){
    for(int j = i+1 ; j<9;j++){
      int temp = sum - arr[i] - arr[j];
      if(temp == 100){
        for(int k = 0; k<9;k++){
            if(k == i || k == j)
              continue;
            printf("%d\n",arr[k]);
          }
      }
    }
  }
  return 0;
}
