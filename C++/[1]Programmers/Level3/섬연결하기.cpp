#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 크루스칼 알고리즘

vector<int> node;

bool compare(vector<int> a, vector<int> b){
  return a[2] < b[2];
}

// Union Find 알고리즘
int find(int index){
  if (node[index] == index){
    return index;
  } else {
    node[index] = find(node[index]);
    return node[index];
  }
}


int solution(int n, vector< vector<int> > costs) {
    int answer = 0;

    for(int i = 0 ; i < n ; i++){
      node.push_back(i);
    }

    sort(costs.begin(), costs.end(), compare);

    for(int i = 0 ; i < costs.size() ; i++ ){
      int start = find(costs[i][0]);
      int end = find(costs[i][1]);
      int cost = costs[i][2];

      if(start != end){
        node[end] = start;
        answer += cost;
      }
    }

    return answer;
}

int main(){
  int n = 4;
  vector< vector<int> >costs;
  vector<int> vec;

  vec.push_back(0);
  vec.push_back(1);
  vec.push_back(1);
  costs.push_back(vec);

  vec.clear();
  vec.push_back(0);
  vec.push_back(2);
  vec.push_back(2);
  costs.push_back(vec);

  vec.clear();
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(5);
  costs.push_back(vec);

  vec.clear();
  vec.push_back(1);
  vec.push_back(3);
  vec.push_back(1);
  costs.push_back(vec);

  vec.clear();
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(8);
  costs.push_back(vec);

  cout << solution(n,costs) << endl;

  return 0;
}
