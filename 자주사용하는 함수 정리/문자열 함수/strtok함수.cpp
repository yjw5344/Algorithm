#include<string.h>
#include<string>
#include<iostream>
using namespace std;

// Token을 이용한 파싱 방법
// strtok() 함수를 이용하여 파싱을 하는 방법

int main(){
  char str[] = "Hello world my, show me the money";
  //string str = "show me the money"; // string 타입의 문자열은 사용이 불가합니다.
  char* token = strtok(str," ");

  while(token != NULL){
    token = strtok(NULL, " ");
    cout << token << endl;
  }

  return 0;
}
