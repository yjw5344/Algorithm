#include<iostream>

int main()
{
	int monthDay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int inputMonth, inputDay, sumDays = 0;

	scanf("%d %d", &inputMonth, &inputDay);

	for (int i = 0; i < inputMonth-1; i++)
		sumDays += monthDay[i];
	for (int i = 0; i < inputDay; i++)
		sumDays++;

	int temp = (sumDays-1) % 7;
	if(temp == 0)
		printf("MON\n");
	else if(temp == 1)
		printf("TUE\n");
	else if(temp == 2)
		printf("WED\n");
	else if(temp == 3)
		printf("THU\n");
	else if(temp == 4)
		printf("FRI\n");
	else if(temp == 5)
		printf("SAT\n");
	else if(temp == 6)
		printf("SUN\n");

	return 0;
}
