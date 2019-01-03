#include<iostream>

int main()
{
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);

	printf("%d\n", (n1 + n2) % n3);
	printf("%d\n", ((n1 % n3) + (n2%n3))%n3);
	printf("%d\n", (n1 * n2) % n3);
	printf("%d\n", ((n1 % n3) * (n2%n3))%n3);

	return 0;
}
