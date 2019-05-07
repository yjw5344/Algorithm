#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> people, int limit) {
  int answer = 0;
  int lightIndex = 0;
  int heavyIndex = people.size()-1;

  sort(people.begin(), people.end());

  while(lightIndex < heavyIndex){
    if(people.at(lightIndex) + people.at(heavyIndex) <= limit){
      answer++;
      lightIndex++;
      heavyIndex--;
    }else{
      heavyIndex--;
    }
  }
  return people.size() - answer;
}

int main(){
  vector<int> people1;
  vector<int> people2;
  int limit = 100;

  people1.push_back(70);
  people1.push_back(50);
  people1.push_back(80);
  people1.push_back(50);

  people2.push_back(70);
  people2.push_back(80);
  people2.push_back(50);

  cout << solution(people1, limit) << endl;
  cout << solution(people2, limit) << endl;

  return 0;
}
