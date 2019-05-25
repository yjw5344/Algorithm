#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class HardDisk{
public:
  int startTime;
  int workTime;
  HardDisk(int startTime, int workTime){
    this->startTime = startTime;
    this->workTime = workTime;
  }
};

bool compare(HardDisk a, HardDisk b){
  if(a.workTime == b.workTime){
    return a.startTime < b.startTime;
  }else{
    return a.workTime < b.workTime;
  }
}

int solution(vector< vector<int> > jobs) {
    int jobsCount = jobs.size();
    vector<HardDisk> disks;

    for(int i = 0 ; i < jobsCount; i++){
      HardDisk hard(jobs[i][0],jobs[i][1]);
      disks.push_back(hard);
    }

    sort(disks.begin(), disks.end(), compare);

    int time = 0;
    int totalTime = 0;

    while(!disks.empty()){
      for(int i = 0 ; i < disks.size() ; i++){
        HardDisk currentDisk = disks.at(i);
        if(currentDisk.startTime <= time){
          time += currentDisk.workTime;
          totalTime += time - currentDisk.startTime;
          disks.erase(disks.begin() + i);
          break;
        }

        // 주의! 빈 시간이 있는 경우 처리를 해줘야된다.
        if (i == disks.size()-1){
          time++;
        }
      }
    }

    int answer = totalTime / jobsCount;
    return answer;
}

int main(){
  vector< vector<int> > jobs;
  vector<int> t;
  t.push_back(0);
  t.push_back(3);
  jobs.push_back(t);
  t[0] = 1;
  t[1] = 9;
  jobs.push_back(t);
  t[0] = 2;
  t[1] = 6;
  jobs.push_back(t);

  // t.push_back(0);
  // t.push_back(3);
  // jobs.push_back(t);
  // t[0] = 0;
  // t[1] = 9;
  // jobs.push_back(t);
  // t[0] = 0;
  // t[1] = 5;
  // jobs.push_back(t);
  // t[0] = 0;
  // t[1] = 4;
  // jobs.push_back(t);
  // t[0] = 0;
  // t[1] = 7;
  // jobs.push_back(t);

  cout << solution(jobs) << endl;

  return 0;
}
