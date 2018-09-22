#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> food_times, long long k) {

    int foodNum = food_times.size();
    int totalTime = 0;
    int flag = 0;
    int cnt = 0;
    int answer = 0;

    for(int i = 0 ; i < food_times.size() ; i++){
        totalTime += food_times.at(i);
    }

    while(totalTime != 0){
        flag %= foodNum;
        if(cnt == k){
            answer = (flag+1);
            break;
        }else{
            if(food_times.at(flag) != 0){
                totalTime--;
                food_times.at(flag)--;
                flag++;
                cnt++;
            }else{
                flag++;
            }
        }

    }
    return answer;
}

int main(){
    vector<int> tmp;
    tmp.push_back(3);
    tmp.push_back(1);
    tmp.push_back(2);
    cout << solution(tmp,5) << endl;
    return 0;
}