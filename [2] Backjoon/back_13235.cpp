#include<iostream>
#include<string.h>
using namespace std;

int main(){

  char arr[21];
  int flag = 1;

  cin >> arr;
  int len = strlen(arr);

  for(int i = 0 ; i<len ; i++)
    arr[i] = tolower(arr[i]);

  for(int j = 0 ; j < len/2 ; j++){
    if(arr[j] != arr[len-1-j]){
      flag = 0;
      break;
    }
  }
  if(flag)
    cout << "true" << endl;
  else
    cout << "false" << endl;
  return 0;
}
