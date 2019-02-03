#include<iostream>

int main()
{
	int input;
	scanf("%d", &input);
	int arr[100][100] = { 0, };

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int k = 0; k < input; k++) {
		for (int i = 0; i < input; i++) {
			for (int j = 0; j < input; j++) {
				if (arr[i][k] && arr[k][j])
					arr[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}



	return 0;
}
