#include<iostream>
#include<string>
using namespace std;

int main()
{
	int testCase,sum,cnt;
	string str;
	scanf("%d", &testCase);
	int *result = new int[testCase];

	for (int j = 0; j < testCase; j++) {
		sum = 0;
		cnt = 0;
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 'O')
				cnt++;
			else
				cnt = 0;
			sum += cnt;
		}
		result[j] = sum;
	}

	for (int i = 0; i < testCase; i++)
		printf("%d\n", result[i]);


	return 0;
}
