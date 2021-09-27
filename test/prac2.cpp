#include<iostream>
using namespace std;

class Power {
public:
  int kick;
  int punch;

  Power(int kick = 0, int punch = 0) {
    this -> kick = kick;
    this -> punch = punch;
  }
  void show();
  Power operator+ (Power op2);
  bool operator== (Power op2);
  bool operator! ();
  Power operator++ (int x);
  friend Power operator+(int op1, Power op2);
};

void Power::show() {
  cout << "kick=" << this->kick << " punch=" << this->punch << endl;
}

Power Power::operator+ (Power op2){
  Power power(this->kick + op2.kick , this->punch + op2.punch);
  return power;
}

bool Power::operator== (Power op2){
  if(this->kick == op2.kick && this->punch == op2.punch){
    return true;
  }else {
    return false;
  }
}

bool Power::operator! (){
  if(this->kick == 0 && this->punch == 0){
    return true;
  }else {
    return false;
  }
}

Power Power::operator++ (int x){
  Power power(this->kick, this->punch);
  this->kick +=1;
  this->punch += 1;
  return power;
}

Power operator+(int op1, Power op2){
  Power power(op2.kick + op1 , op2.punch + op1);
  return power;
}

int main(){
  Power a(3, 5), b(4, 6), c;
  c = a+b;
  a.show();
  b.show();
  c.show();

  if(a==b){
    cout << "a와 b의 멤버 변수 값은 같다." << endl;
  } else {
    cout << "a와 b의 멤버 변수 값은 다르다." << endl;
  }

  Power d(0,0);
  if(!a) {
    cout << "a의 멤버 변수는 0이다." << endl;
  } else {
    cout << "a의 멤버 변수는 0이 아니다." << endl;
  }

  if(!d){
    cout << "d의 멤버 변수는 0이다." << endl;
  } else {
    cout << "d의 멤버 변수는 0이 아니다." << endl;
  }

  cout << endl;
  b = a++;
  a.show();
  b.show();

  cout << endl;
  b = 2 + a;
  a.show();
  b.show();

  return 0;
}
