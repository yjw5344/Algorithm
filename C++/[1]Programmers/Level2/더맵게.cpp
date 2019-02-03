#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K) {
  int answer = 0;
  priority_queue< int, vector <int>, greater<int> > scovilleQueue;

  for(vector<int>::iterator iter = scoville.begin(); iter != scoville.end() ; iter++){
    scovilleQueue.push(*iter);
  }

  while(scovilleQueue.top() < K ){
    if(scovilleQueue.size() == 1){
      return -1;
    }
    answer++;
    int frontScoville = scovilleQueue.top();
    scovilleQueue.pop();
    int secondeScoville = scovilleQueue.top();
    scovilleQueue.pop();
    scovilleQueue.push(frontScoville+(secondeScoville*2));
  }

  return answer;
}

int main(){
  vector<int> scoville;
  int K = 7;

  scoville.push_back(1);
  scoville.push_back(2);
  scoville.push_back(3);
  scoville.push_back(9);
  scoville.push_back(10);
  scoville.push_back(12);

  //scoville.push_back(8);

  cout << solution(scoville, K) << endl;

  return 0;
}
