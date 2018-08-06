#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;


double Sum(vector<double> arr, int count){
  double sum = 0.0;
  for(int i = 0 ; i < count ; i++){
    sum += arr[i];
  }
  return sum;
}
double Mean(vector<double>arr, int count){
  return Sum(arr,count)/(double)count;
}
double bunsan(vector<double>arr, int count){
  double sum = 0.0;
  double mean = Mean(arr,count);

  for(int i = 0 ; i < arr.size(); i++){
    sum += pow((arr[i] - mean),2);
  }
  return sum / (double)count;
}
double puncha(vector<double>arr, int count){
  return sqrt(bunsan(arr, count));
}

int main(){

vector<double> tmp;
tmp.push_back(1);
tmp.push_back(2);
tmp.push_back(3);
tmp.push_back(4);
tmp.push_back(5);

cout << puncha(tmp, 5) << endl;

return 0;
}
