#include<iostream>

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
}
