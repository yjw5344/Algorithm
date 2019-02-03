#include<iostream>
#include<string>

int main()
{
	char str[101];
	int findIndex[26];
	int len;
	scanf("%s", str);

	for (int i = 0; i < 26; i++)
		findIndex[i] = -1;

	for (int i = 0; str[i] != '\0'; i++) {
		int index = str[i] - 97;
		if (findIndex[index] == -1) {
			findIndex[index] = i;
		}

	}
	for (int i = 0; i < 26; i++)
		printf("%d ", findIndex[i]);
	return 0;
}
