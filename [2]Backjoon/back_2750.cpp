#include<iostream>
using namespace std;

//선택 정렬
int main()
{
	int inputSize;
	int min;
	cin >> inputSize;
	int* arr = new int[inputSize];
	for (int i = 0; i < inputSize; i++) {
		cin >> arr[i];
	}


	for (int i = 0; i < inputSize - 1; i++) {
		min = arr[i];
		for (int j = i + 1; j < inputSize; j++) {
			if (arr[j] < min) {
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
		}
	}

	for (int i = 0; i < inputSize; i++)
		cout << arr[i] << endl;
	return 0;
}
