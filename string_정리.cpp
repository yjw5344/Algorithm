#include <iosteam>
#include <string>

using namespace std;

int main(){

  string str = "hello world";

  string tmp = str.substring(0,5);
  string tmp1 = str.substring(6,10);

  cout << tmp << endl;
  cout << tmp1 << end;
  return 0;
}
