#include <iostream>
#include <queue>
using namespace std;

int main(){

	queue<int> q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

  cout << "front element : " << q.front() << '\n';
  cout << "back element : " << q.back() << '\n';

	q.pop();
	q.pop();
	q.pop();

  cout << "pop x 3" << endl;
	cout << "front element : " << q.front() << '\n';
	cout << "back element : " << q.back() << '\n';
	cout << "queue size : " << q.size() << '\n';

	cout << "Is it empty? : " << (q.empty() ? "Yes(Empty)" : "No") << '\n';

  return 0;
}
