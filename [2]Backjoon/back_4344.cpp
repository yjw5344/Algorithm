#include<iostream>

int main()
{
	int studentNum, testCase;

	scanf("%d", &testCase);
	double *testArr = new double[testCase];

	for (int j = 0; j < testCase; j++) {

		scanf("%d", &studentNum);
		int *studentArr = new int[studentNum];
		int sum = 0, count = 0;
		double avg=0;

		for (int i = 0; i < studentNum; i++) {
			scanf("%d", &studentArr[i]);
			sum += studentArr[i];
		}
		avg = sum / studentNum;
		for (int i = 0; i < studentNum; i++) {
			if (studentArr[i] > avg)
				count++;
		}
		testArr[j] = count / (double)studentNum * 100;
	}

	for (int i = 0; i < testCase; i++)
		printf("%.3lf%%\n", testArr[i]);


	return 0;
}
