#include<iostream>

using namespace std;

int main(){

  while(true){
    int score;
    cout << "0~100 사이의 점수를 입력하세요 >> ";
    cin >> score;

    if(score > 100){
      cout << "점수 입력이 잘못되었습니다." << endl;
    } else if(score <= 100 && score >= 90){
      cout << "A학점" << endl;
    } else if(score < 90 && score >= 80){
      cout << "B학점" << endl;
    } else if(score < 80 && score >= 70){
      cout << "C학점" << endl;
    } else if(score < 70 && score >= 60){
      cout << "D학점" << endl;
    } else if(score < 60 && score >= 0){
      cout << "F학점" << endl;
    } else{
      cout << "점수 입력이 잘못되었습니다." << endl;
    }
  }

  return 0;
}
