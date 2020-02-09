#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  vector<int> vec;
  vec.push_back(1);
  vec.push_back(1);
  vec.push_back(0);
  vec.push_back(1);


  for(int i = 0 ; i < vec.size() ; i++){
    cout << "[index : " << i << "] : " << vec[i] << endl;
  }

  cout << "---- next_permutation 순열 중복 ----" << endl;
  sort(vec.begin(), vec.end());
  do{
    for(int i = 0 ; i < vec.size() ; i++){
      cout << vec[i] << " ";
    }
    cout << endl;
  }while(next_permutation(vec.begin(), vec.end()));

  cout << "---- next_permutation 조합 ----" << endl;

  vec.clear();
  vec.push_back(4);
  vec.push_back(2);
  vec.push_back(6);
  vec.push_back(1);

  // 조합을 뽑기 위한 0,1을 저장하는 벡터를 생성
  vector<int> ind;

  // n C r : n개 중에서 r개를 뽑는다.
  // 다음으로 r을 정해준다.
  int r = 3;

  for(int i = 0 ; i < r ; i++){
    // 뽑을 만큼 index 벡터에 1을 추가해준다.
    ind.push_back(1);
  }

  for(int i = 0 ; i < vec.size()-r ; i++){
    // n개에서 r개를 뽑고, 나머지를 0으로 index 벡터에 채워준다.
    ind.push_back(0);
  }

  // 정렬
  sort(ind.begin(), ind.end());

  sort(vec.begin(), vec.end());
  cout << "Array : ";
  for(int i = 0 ; i < vec.size() ; i++){
    cout << vec[i] << " ";
  }
  cout << endl;

  // 순열(조합)
  do {
    for(int i = 0 ; i < ind.size() ; i++){
      if(ind[i] == 1){
        cout << vec[i] << " ";
      }
    }
    cout << endl;
  } while(next_permutation(ind.begin(), ind.end()));



  return 0;
}
