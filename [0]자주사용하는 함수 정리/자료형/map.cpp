//  map 정의
// key - value 쌍(pair)형태로 원소를 저장
// 중복이 허용되지 않는다.

//  Map Sort by key
// 일반적으로 map 사용 시 key를 이용하여 정렬하게 되는데, 특별한 내용 없이 생성 단계에서 지정이 가능하다.
//   1 ) 오름 차순의 경우 : std::map< int, int > data
//   2 ) 내림 차순의 경우 : std::map< int, int, std::greater<int> > data

#include <iostream>
#include <map>
using namespace std;

int main(){

  map<int, int> mp;

  mp.insert(pair<int, int>(6, 100));
  mp.insert(pair<int, int>(5, 100));
  mp.insert(pair<int, int>(6, 100));

  for ( map<int, int>::iterator iter = mp.begin(); iter != mp.end(); ++iter){
    cout << "(" << (*iter).first << "," << (*iter).second << ")" << endl;
  }


  // map -> Key 값을 찾아서 value 증가 시키기!

  map<string, int> m;
  string str = "show me the money show show show me the";
  string token;
  stringstream ss(str);

  while (ss >> token){
    map<string, int>::iterator iter = m.find(token);
    if( iter == m.end()){
      m.insert(make_pair(token, 1));
    }
    else{
      (*iter).second++;
    }
  }

  map<string, int>::iterator iter;
  for(iter = m.begin(); iter != m.end(); iter++){
    cout << (*iter).first << " " << (*iter).second << endl;
  }

  return 0;
}
