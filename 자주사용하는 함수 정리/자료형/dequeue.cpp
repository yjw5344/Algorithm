#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);

    for (deque<int>::size_type i = 0; i < dq.size(); ++i){
        cout << dq[i] << ' ';
    }
    cout << endl;

    dq.push_front(100);
    dq.push_front(200);    // 앞에 추가한다.

    for (deque<int>::size_type i = 0; i < dq.size(); ++i){
        cout << dq[i] << ' ';
    }
    cout << endl;


    deque<int>::iterator iter;
    deque<int>::iterator iter2;

    for (iter = dq.begin(); iter != dq.end(); ++iter){
        cout << *iter << ' ';
    }
    cout << endl;

    iter = dq.begin() + 2;            // dq의 3번째 원소에 접근
    iter2 = dq.insert(iter, 500);    // 3번째 원소 자리에 500을 삽입한다.
    cout << *iter2 << endl;

    for (iter = dq.begin(); iter != dq.end(); ++iter){
        cout << *iter << ' ';
    }

    return 0;
}
