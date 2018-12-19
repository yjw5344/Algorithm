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

  map<int, int> m;

  m.insert(pair<int, int>(6, 100));
  m.insert(pair<int, int>(5, 100));
  m.insert(pair<int, int>(6, 100));

  for ( map<int, int>::iterator iter = m.begin(); iter != m.end(); ++iter){
    cout << "(" << (*iter).first << "," << (*iter).second << ")" << endl;
  }

  return 0;
}
