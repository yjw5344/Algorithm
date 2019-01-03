//  set 정의
//  set 에서 원소를 key라 하며 이 키를 비교하여 내부 원소를 정렬하여 저장한다.
//  set 은 모든 원소가 유일하다.
//  set에서 원소의 중복을 허용하지 않는다.

#include <iostream>
#include <set>
using namespace std;

int main(){

  set<int> s;

  s.insert(2);
  s.insert(10);
  s.insert(1);
  s.insert(1);

  for(set<int>::iterator iter = s.begin() ; iter != s.end() ; iter++ ){
    cout << *iter << endl;
  }

  return 0;
}
