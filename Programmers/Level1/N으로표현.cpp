#include <queue>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int solution(int N, int number) {
  int n = 0;
  queue< pair < int, int > > result;
  for(int i = 0 ; i < 7;i++){
    n = n + (pow(10, i) * N);
    result.push(make_pair(n ,i+1));
  }

	for (int i = 0; i < result.size(); i++){
    int n1 = result.front().first;
    int n2 = result.front().second;

		if (n1 == number){
      return n2;
		}
		else{
      if(n2 > 8 ){
        continue;
      }else if(){

      } else{
        result.push(make_pair( n1 + N, n2 + 1));
  			result.push(make_pair( n1 - N, n2 + 1));
  			result.push(make_pair( n1 / N, n2 + 1));
  			result.push(make_pair( n1 * N, n2 + 1));
  			result.pop();
      }
		}
	}
  return -1;

  //==============================================================================================
  // map으로 풀었을 때
  // int n = 0;
  // map< int, int > m;
  // map< int, int>::iterator iter;
  //
  // m.insert(pair< int, int >(N,1));
  // for(iter = m.begin() ; iter != m.end() ; iter++){
  //   m.insert(pair< int, int >( (iter->first) + (pow(10, (iter->second)) * N), (iter->second)+1));
  // }
  //
  //
  // for( iter = m.begin() ; iter != m.end() ; iter++){
  //
  //   if( iter->first == number){
  //     return (iter->second);
  //   }else{
  //     if( iter->second < 8){
  //       m.insert(pair< int, int >( iter->first + N, iter->second + 1));
  //       m.insert(pair< int, int >( iter->first - N, iter->second + 1));
  //       m.insert(pair< int, int >( iter->first / N, iter->second + 1));
  //       m.insert(pair< int, int >( iter->first * N, iter->second + 1));
  //     }
  //   }
  // }
  //
  // if(m.find(number) == m.end()){
  //   return -1;
  // }else{
  //   return m.find(number)->second;
  // }
}

int main(){
  cout << solution(5,12) << endl;
  return 0;
}
