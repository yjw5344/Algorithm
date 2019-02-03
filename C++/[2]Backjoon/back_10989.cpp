#include<iostream>
using namespace std;

int main()
{
	int size,input;
	scanf("%d", &size);
	int arr[10001] = {0,};

	for (int i = 0; i < size; i++) {
		scanf("%d", &input);
		arr[input]++;
	}

	for (int i = 1; i < 10001; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++)
				printf("%d\n", i);
		}
	}

	return 0;
}
