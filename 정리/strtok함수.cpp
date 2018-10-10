#include<string.h>
#include<string>
#include<iostream>

using namespace std;

int main(){

  char str[] = "Hello world my, show me the money";
  //string str = "show me the money"; // 안됨
  char* token = strtok(str," ");
  printf("%s\n", token);
  token = strtok(NULL," ");
  printf("%s\n", token);

  return 0;
}
