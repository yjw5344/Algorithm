#include<iostream>

int main() {
	int count = 0;
	int num,n1,n2,first;
	scanf("%d", &num);
	first = num;
	while (true) {
		n1 = num / 10;
		n2 = num % 10;
		count++;
		num = n2*10 + ((n1+n2)%10);
		if (num == first)
			break;
	}
	printf("%d", count);



}
