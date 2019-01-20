#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
  int time = 0;
  int check = 0;
  queue<int> bridge;

  for(int i = 0 ; i < truck_weights.size() ; i++){
    int truck = truck_weights.at(i);

    while(true){
      if(bridge.empty()){
        bridge.push(truck);
        check += truck;
        time++;
        break;
      }else if(bridge.size() == bridge_length){
        check -= bridge.front();
        bridge.pop();
      }else{
        if(check + truck <= weight){
          check += truck;
          bridge.push(truck);
          time++;
          break;
        }else{
          bridge.push(0);
          time++;
        }
      }
    }
  }
  return time + bridge_length;
}

int main(){
  int bridge_length_1 = 2;
  int weight_1 = 10;
  int bridge_length_2 = 100;
  int weight_2 = 100;
  vector<int> truck_weights_1;
  vector<int> truck_weights_2;

  truck_weights_1.push_back(7);
  truck_weights_1.push_back(4);
  truck_weights_1.push_back(5);
  truck_weights_1.push_back(6);
  truck_weights_2.push_back(10);

  cout << solution(bridge_length_1, weight_1, truck_weights_1) << endl;
  cout << solution(bridge_length_2, weight_2, truck_weights_2) << endl;

  return 0;
}
