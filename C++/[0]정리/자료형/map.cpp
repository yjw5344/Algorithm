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

  // <map 사용법 1>

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

  // <map 사용법 2>

  map<int, string> m;
  m.insert(pair<int, string> (1, "a"));

  // map에서 find() 접근법!
  // m.find(1)->second
  // (*m.find(1)).second
  // 결과를 못 찾을 경우 map의 마지막 주소값을 return 한다.
  // map.find("key") == map.end() -> 원하는 key 값을 찾지 못했다.

  // map에서 동일한 key값이 있을 경우 value를 갱신하는 코드
  if(m.find(1) == m.end()){
    m.insert(pair<int, string> (1, "b"));
  }else {
    m.find(1)->second = "b";
  }

  m.insert(pair<int, string> (2, "b"));

  map<int, string>::iterator iter;
  for(iter = m.begin(); iter != m.end(); iter++){
    cout << (*iter).first << " " << (*iter).second << endl;
  }


  return 0;
}
