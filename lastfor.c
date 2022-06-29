#include<stdio.h>

int main(void)
{
	int n;
	scanf_s("%d", &n);
	int count = 0;
	int new_num = n;
	while (1)
	{
		int units = new_num % 10;
		int tens = (new_num / 10);
		int sum = units + tens;
		sum = sum % 10;
		units = units * 10;
		new_num = units + sum;
		count++;
		if (new_num == n)
		{
			break;
		}
	}
	printf("%d", count);
	return 0;
}