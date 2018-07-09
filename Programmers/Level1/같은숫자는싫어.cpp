#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    for(int i = 0 ; i < arr.size() ; i++){
      for(int j = i+1 ; j< arr.size() ; j++){
        if(arr[i] == arr[j]){
          continue;
        }else{
          answer.push_back(arr[i]);
          i = j;
          break;
        }
      }
      if( i == arr.size()-1){
        answer.push_back(arr[i]);
      }

    }
    return answer;
}
