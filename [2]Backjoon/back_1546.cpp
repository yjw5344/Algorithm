#include<iostream>
int main()
{
	int sub[1000];
	int num, max = 0;
	double sum=0;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &sub[i]);
		if (sub[i] > max)
			max = sub[i];
	}
	for (int i = 0; i < num; i++) {
		sum += (double)sub[i] / max * 100;
	}

	printf("%.2lf\n", (sum / num));



	return 0;
}
