#include<iostream>

int main()
{
	int num, sum = 0,inputNum;
	char input[101];
	scanf("%d", &num);
	scanf("%s", input);


	for (int i = 0; i < num; i++) {
		sum += (int)input[i] - 48;
	}

	printf("%d\n", sum);
	return 0;
}
