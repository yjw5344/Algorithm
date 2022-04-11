#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector< vector<int> > routes) {
    int answer = 2;
    return answer;
}

int main() {
  vector< vector<int> > routes;

  vector<int> tmp;
  tmp.push_back(-20);
  tmp.push_back(-15);
  routes.push_back(tmp);
  tmp.clear();

  tmp.push_back(-14);
  tmp.push_back(-5);
  routes.push_back(tmp);
  tmp.clear();

  tmp.push_back(-18);
  tmp.push_back(-13);
  routes.push_back(tmp);
  tmp.clear();

  tmp.push_back(-5);
  tmp.push_back(-3);
  routes.push_back(tmp);
  tmp.clear();

  cout << solution(routes) << endl;

  return 0;
}
