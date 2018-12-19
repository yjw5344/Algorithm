#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// sstream 헤더를 선언!
// stringstream을 이용해서 공백을 기준으로 파싱을 한다

int main(){
   string t = "show me   th e    moeny";
   string out;
   stringstream ss(t);

   while (ss >> out){
      cout << out << endl;
   }
   return 0;
}
