#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<int> st;

  if( st.empty()){
    cout << " Empty!" << endl;
  }

  st.push(10);
  st.push(20);
  st.push(30);

  cout << st.top() << endl;

  st.pop();

  cout << st.top() << endl;

  cout << st.size() << endl;

  return 0;
}
