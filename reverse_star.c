#include<stdio.h>

int main(void)
{
	int n;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - i;j++) 
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}