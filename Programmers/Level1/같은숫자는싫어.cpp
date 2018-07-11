#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;

    for(int i = 0 ; i < arr.size()-1 ; i ++){
      if(i == 0 ){
        answer.push_back(arr[i]);
      }
      
      if( arr[i] != arr[i+1]){
        answer.push_back(arr[i+1]);
      }
    }

    return answer;
}
