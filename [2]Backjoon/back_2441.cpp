#include<iostream>

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i; j++)
			printf(" ");
		for (int j = 0; j < num - i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
