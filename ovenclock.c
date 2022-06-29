#include<stdio.h>

int main(void) 
{
	int a, b, c;
	scanf_s("%d %d", &a, &b);
	scanf_s("%d", &c);

	int sum = b + c;
	if (sum < 60) {
		printf("%d %d", a, sum);
	}
	else if (sum >= 60) {
		int minute = sum % 60;
		int add_hour = sum / 60;
		int hour = a + add_hour;
		if (hour >= 24) {
			hour = hour - 24;
		}
		printf("%d %d", hour,minute);

	}
	return 0;

}