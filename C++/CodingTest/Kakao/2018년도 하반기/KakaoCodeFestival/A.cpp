#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main(){

  int input, a ,b;

  vector < pair< int, int> >T;
  vector < pair< int, int> >code2017;
  vector < pair< int, int> >code2018;

  code2017.push_back(make_pair(500,1));
  code2017.push_back(make_pair(300,2));
  code2017.push_back(make_pair(200,3));
  code2017.push_back(make_pair(50,4));
  code2017.push_back(make_pair(30,5));
  code2017.push_back(make_pair(10,6));

  code2018.push_back(make_pair(512,1));
  code2018.push_back(make_pair(256,2));
  code2018.push_back(make_pair(128,4));
  code2018.push_back(make_pair(64,8));
  code2018.push_back(make_pair(32,16));

  cin >> input;

  for(int i = 0 ; i < input ; i++){
    cin >> a >> b;
    T.push_back( make_pair(a,b) );
  }

  for(int i = 0 ; i < T.size() ; i++){
    int price = 0;
    int rank2017 = 0;
    int rank2018 = 0;
    for(int j = 0 ; j < code2017.size() ; j++){
      rank2017 += code2017.at(j).second;
      if( rank2017 < T.at(i).first ){
        continue;
      }else{
        price += code2017.at(j).first;
        break;
      }
    }

    for(int j = 0 ; j < code2018.size() ; j++){
      rank2018 += code2018.at(j).second;
      if( rank2018 < T.at(i).second ){
        continue;
      }else{
        price += code2018.at(j).first;
        break;
      }
    }

    price = price * 10000;
    cout << price << endl;
  }

  return 0;
}
