// SW Expert
// 1859번 백만장자 문제

#include<iostream>
using namespace std;

int main(){

  // 총 테스트케이스 정하기!
  int testCase;
  cin >> testCase;

  int *result = new int[testCase];

  for(int i = 0 ; i< testCase ; i++){

    // 변수 선언
    int D[1000001] = {0 ,};
    int N;
    int profit = 0;
    int price = 0;
    int cnt = 0;

    cin >> N;

    for(int j = 0 ; j < N ; j ++){
      cin >> D[j];
    }

    for(int x = 0; x < N ; x++){
      if(D[x] <= D[x+1]){
        price += D[x];
        cnt++;
      } else{
        profit = (cnt * D[x] - price) + profit;
        price = 0;
        cnt = 0;
      }
    }
    result[i] = profit;
  }

  for(int i = 0; i < testCase ; i++){
    cout << "#" << i+1 << " " << result[i] << endl;
  }

  return 0;
}

// 문제 해설 !
// T개의 testCase를 입력 받는다.
//
// T개의 테스트에 대해서 N개의 입력값을 입력 받는다.
// 하루하루 N개의 매매값을 입력 받을 떄, N개의 입력값만 받는 것이 아니라 N+1개의 입력값을 받는다.
//
// N번째와 N+1번째를 비교한다.
// 1) N번째의 매매값이 N+1번째보다 작으면 price의 값에 더해준다.
// 2) N번째의 매매값이 N+1보다 크면 계산을 실시한다.
//    계산, profit = 매매값을 더해준 것 x 매매가격 - 총 price
//
// N과 N+1을 비교하는 이유, 배열을 N+1개 만큼 초기화하였기때문에 쉽게 다음항까지 비교가 가능하다.
