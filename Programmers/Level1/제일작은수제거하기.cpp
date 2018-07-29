#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    int mini = arr[0];
    int index;


    if(arr.size() > 1 ){

      for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] < mini){
          mini = arr[i];
          index = i;
        }
      }

      for(int i = 0 ; i < arr.size() ; i++){
        if( i == index){
          continue;
        }else{
          answer.push_back(arr[i]);
        }
      }

    }else{
      answer.push_back(-1);
    }
    return answer;
}
