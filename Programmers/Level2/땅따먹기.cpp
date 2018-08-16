#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int> > land){

  int answer = 0;
  int prePosition = -1;
  vector<int> result;


  for(int i = 0 ; i < land.size() ; i++){
    int max = 0 ;
    int tmpPosition;
    for(int j = 0 ; j < land.at(i).size(), j++){
      if(prePosition != j){
        if(max < land.at(i).at(j)){
          max = land.at(i).at(j);
          tmpPosition = j;
        }
      }
    }
    prePosition = tmpPosition;
  }






  return answer;
}
