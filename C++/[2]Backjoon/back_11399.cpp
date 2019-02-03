#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	// 변수 정의
	int n;
	int sum = 0, total = 0;
	int arr[1000] = { 0, };

	// 변수값 입력 !
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr+n);
	for (int i = 0; i < n; i++) {
		sum += arr[i];
		total += sum;
	}
	cout << total << endl;
	return 0;
}
