#include <string>
#include <queue>
#include <cmath>
#include <iostream>
#include <map>

using namespace std;

int solution(int N, int number) {
  int n = 0;
  queue< pair < int, int > > result;
  for(int i = 0 ; i < 7;i++){
    n = n + (pow(10, i) * N);
    result.push(make_pair(n ,i+1));
  }

	for (int i = 0; i < result.size(); i++){
		if (result.front().first == number){
      return result.front().second;
		}
		else{
      if(result.front().second == 9 ){
        break;
      }else{
        result.push(make_pair((result.front().first) + N, (result.front().second) + 1));
  			result.push(make_pair((result.front().first) - N, (result.front().second) + 1));
  			result.push(make_pair((result.front().first) / N, (result.front().second) + 1));
  			result.push(make_pair((result.front().first) * N, (result.front().second) + 1));
  			result.pop();
      }
		}
	}
  return -1;
}

int solution2(int N, int number) {
  int n = 0;
  map<int, int> m;
  map<int, int>::iterator iter;
  for(int i = 0 ; i < 7;i++){
    n = n + (pow(10, i) * N);
    m.insert(pair<int, int>(n, i+1));
  }

	for (iter = m.begin();iter!=m.end();iter++){
		//if (iter->first == number){
    //  return (iter->second);
		//}
		//else{
      if((iter->second) == 9 ){
        break;
      }else{
        m.insert(pair<int ,int>((iter->first) + N, (iter->second) + 1));
        m.insert(pair<int ,int>((iter->first) - N, (iter->second) + 1));
        m.insert(pair<int ,int>((iter->first) / N, (iter->second) + 1));
        m.insert(pair<int ,int>((iter->first) * N, (iter->second) + 1));
      }
		//}
	}
  if(m.find(number) == m.end()){
    return -1;
  }else{
    m.find(number)->second;
  }
}



int main(){
  cout << solution(5,12) << endl;
  return 0;
}
