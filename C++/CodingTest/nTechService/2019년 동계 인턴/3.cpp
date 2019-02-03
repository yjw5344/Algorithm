#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string encrypted_text, string key, int rotation) {

  if(rotation > 0){
    for(int i = 0 ; i < rotation ; i++){
      string str = "";
      for( int j = 1 ; j < encrypted_text.size() ; j++){
        str += encrypted_text.at(j);
        if(j == encrypted_text.size()-1){
          str += encrypted_text.at(0);
        }
      }
      encrypted_text = str;
    }
  }else{
    rotation = rotation * (-1);
    for(int i = 0 ; i < rotation ; i++){
      string str = "";
      for( int j = 0 ; j < encrypted_text.size() - 1 ; j++){
        if(j == 0){
          str += encrypted_text.at(encrypted_text.size() - 1);
        }
        str += encrypted_text.at(j);
      }
      encrypted_text = str;
    }
  }

  for(int i = 0 ; i < encrypted_text.size() ; i++){
    int index = key.at(i) - 96;
    if( encrypted_text.at(i) - index < 97){
      encrypted_text.at(i) = encrypted_text.at(i) - index + 26;
    }
    else{
      encrypted_text.at(i) -= index;
    }
  }
  return encrypted_text;
}

int main(){
  string et = "qyyigoptvfb";
  string key = "abcdefghijk";
  int r = 3;
  cout << solution(et, key, r) << endl;
  return 0;
}
