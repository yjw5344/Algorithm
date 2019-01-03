#include<iostream>
using namespace std;


int func(int input) {
	int *arr = new int[input+1];
	int result = 0;
	for (int i = 0; i < input+1; i++) {
		if (i == 0)
			arr[i] = 0;
		else if (i == 1)
			arr[i] = 1;
		else
			arr[i] = arr[i - 2] + arr[i - 1];
	}
	return arr[input];
}

int main()
{
	int input,result;
	cin >> input;

	result = func(input);
	cout << result << endl;
	return 0;
}
