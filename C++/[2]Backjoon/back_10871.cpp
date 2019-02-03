#include<iostream>

int main()
{
	int range, target;
	scanf("%d %d", &range, &target);
	int *arr = new int[range];

	for (int i = 0; i < range; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < range; i++) {
		if (arr[i] < target)
			printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
