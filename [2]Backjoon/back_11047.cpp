#include<iostream>
using namespace std;

int main()
{
	int coin, value;
	int count = 0;
	int i = 1;
	cin >> coin >> value;
	int money[10] = { 1, };


	// 동전 만들기 !
	for (int i = 0; i < coin; i++) {
		cin >> money[i];
	}


	// 분류 하기 !

	while(value>0) {
		if (value >= money[coin - i]) {
			value = value - money[coin - i];
			count++;
		}
		else {
			i++;
		}
	}
	cout << count << endl;

	return 0;
}
