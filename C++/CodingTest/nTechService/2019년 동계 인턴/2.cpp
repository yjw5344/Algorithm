#include <iostream>

#include <string>
#include <vector>

using namespace std;

string solution(int num) {
  string answer = "";
  vector<string> str;
  vector< pair<int, string> > arr;
  arr.push_back( make_pair(2,"이"));
  arr.push_back( make_pair(3,"삼"));
  arr.push_back( make_pair(4,"사"));
  arr.push_back( make_pair(5,"오"));
  arr.push_back( make_pair(6,"육"));
  arr.push_back( make_pair(7,"칠"));
  arr.push_back( make_pair(8,"팔"));
  arr.push_back( make_pair(9,"구"));

  int cnt = 0;
  while(num > 0){
    int r = num % 10;
    num = num / 10;

    string tmp;

    if( r != 0){
      if(r != 1){
        for(int i = 0 ; i < arr.size() ; i++){
          if(arr.at(i).first == r)
            tmp += arr.at(i).second;
        }
      }

      if(cnt == 0 && r == 1){
        tmp += "일";
      }else if(cnt == 1){
        tmp += "십";
      }else if(cnt == 2){
        tmp += "백";
      }else if(cnt == 3){
        tmp += "천";
      }else if(cnt == 4){
        tmp += "만";
      }

    }
    str.push_back(tmp);
    cnt++;
  }

  for(int i = str.size()-1 ; i >= 0 ; i--){
    answer+= str.at(i);
  }
  return answer;
}

int main(){
  int num = 2002;

  cout << solution(num) << endl;

  return 0;
}
