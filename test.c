#include<stdio.h>

int main(void)
{
	printf("1���� 100���� ��\n");
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}