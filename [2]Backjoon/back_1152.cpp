#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int count = 0;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == ' ')
			count++;
	}
	if (str.at(0) == ' ')
		count--;
	if (str.at(str.length() - 1) == ' ')
		count--;


	count += 1;
	printf("%d\n", count);

	return 0;
}
