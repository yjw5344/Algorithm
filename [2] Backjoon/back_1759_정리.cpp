// 백준 1759번
// 암호 만들기 문제!

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

// 알파벳 모음 : a e i o u
bool checkArr(string password){
  int ja = 0;
  int mo = 0;

  for(int i = 0; i<password.size();i++){
    char tmp = password[i];
    if(tmp == 'a' || tmp == 'e' || tmp == 'i' || tmp == 'o' || tmp == 'u')
      mo += 1;
    else
      ja += 1;
  }
  return ja >= 2 && mo >= 1;
}

void makePassword(int passwordSize, int inputSize, char *alpha, string result, int index){

  if(result.size() == passwordSize){
    if(checkArr(result)){
      cout << result <<endl;
    }
    return;
  }

  if(inputSize == index) {
    return;
  }

  makePassword(passwordSize, inputSize, alpha, result + alpha[index], index + 1);
  makePassword(passwordSize, inputSize, alpha, result , index+1);
}

int main(){

  int L;
  int C;
  // int index = 0;
  // string result = "";

  scanf("%d %d",&L,&C);


  char *alpha = new char[C];
  for(int i = 0 ; i<C ; i++){
    cin >> alpha[i];
  }

  sort(alpha, alpha+C);

  // makePassword(L,alpha,result,index);
  makePassword(L, C, alpha, "", 0);

  return 0;
}

// 재귀 함수를 잘 이해해야 풀 수 있는 문제
// 재귀 함수의 매개변수 사용에 주의해서 풀어야된다.
// 순열의 경우 매번 바뀌는 값을 구해야된다. => 이때, 재귀함수의 매개변수를 변수로 사용하면 (매개변수에 변수를 사용, 주소값으로 변수를 이용하는 방법)
// 매번 바뀌는 결과 값을 구할 수 없다.
// 따라서, 답을 구하기 위해서 재귀함수의 매개변수에 결과값을 넘겨주어야 매번 바뀌는 값을 구할 수 있다.
