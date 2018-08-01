#include <string>
#include <vector>
#include <bitset>

using namespace std;


int countBits(int n){
  // vector<string> bits;
  // int bitsCount = 0;
  //
  // while( n > 0 ){
  //   if(n % 2 == 1){
  //     bits.push_back("1");
  //   }else{
  //     bits.push_back("0");
  //   }
  //   n /= 2;
  // }
  //
  // for(int i = 0 ; i < bits.size() ; i++){
  //   if(bits[i] == "1"){
  //     bitsCount++;
  //   }
  // }
  // return bitsCount;

  bitset<32> binary(n);
  return binary.count();
}

int solution(int n) {
  int original = countBits(n);
  while(n){
    n++;
    if( original == countBits(n)){
      return n;
    }
  }
}
