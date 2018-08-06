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


  int n1;
  int n2;
  vector<double> arr;
  vector<double> result;

  cin >> n1 >> n2;

  for(int i = 0 ; i< n1 ; i++){
    int num;
    cin >> num;
    arr.push_back(num);
  }

  for(int i = n2 ; i <= n1 ; i++){
    for(int z = 0 ; z <= (n1 - i) ; z ++){
      vector<double> tmp;
      for(int j = 0 ; j < i ; j++){
        tmp.push_back(arr.at(z+j));
      }
      result.push_back(puncha(tmp,i));
    }
  }

  sort(result.begin(), result.end());
  cout << result.at(0) << endl;

  return 0;
}
