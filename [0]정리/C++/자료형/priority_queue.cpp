#include <iostream>
#include <queue>
#include <vector>
#include <utility>
using namespace std;

int main(){
   // 우선순위 큐
   // 우선순위로 큐를 정렬해준다.
   // priority_queue<int, vector<int>, greater<int>> pq;       오름차순
   // priority_queue<int, vector<int>, less<int>> pq; => 기본 형태이다.  내림차순

   priority_queue< pair < int, int >, vector< pair < int, int > >, less< pair < int, int > > > pq;

   // pair의 첫번째 인자의 우선순위 순서
   // pair의 첫번째 인자의 우선순위가 같은 경우, 두번째 인자의 우선순위로 판단한다.

   // push, pop, top, empty 메서드 사용

   pq.push(make_pair(4, 11));
   cout << pq.top().first << ", " << pq.top().second << endl;
   pq.push(make_pair(5, 5));
   cout << pq.top().first << ", " << pq.top().second << endl;
   pq.push(make_pair(5, 6));
   cout << pq.top().first << ", " << pq.top().second << endl;
   pq.push(make_pair(5, 3));
   cout << pq.top().first << ", " << pq.top().second << endl;
   pq.push(make_pair(7, 3));
   cout << pq.top().first << ", " << pq.top().second << endl;
   pq.push(make_pair(9, 1));
   cout << pq.top().first << ", " << pq.top().second << endl;
   pq.push(make_pair(8, 2));
   cout << pq.top().first << ", " << pq.top().second << endl;

   return 0;
}
