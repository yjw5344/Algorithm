#include<iostream>
using namespace std;

class Test{
  public:
    int num;

  public:
    Test(int num) {
      this->num = num;
    }
    void show(){
      num = 10;
      cout << num << endl;
    }

    void print() {
      cout << "print" << endl;
    }

    void print() const{
      // this -> num = 1;
      cout << "print Const" << endl;
    }
};


int func(int &num){
  cout << num << endl;
  cout << &num << endl;

}

int main(){
  int num = 10;
  // cout << &num << endl;
  // func(num);

  Test test(4);
  test.show();
  test.print();

  const Test test2(5);
  // test2.show();
  test2.print();
  return 0;
}
