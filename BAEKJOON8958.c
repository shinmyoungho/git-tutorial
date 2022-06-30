#include<stdio.h>
#include<string.h>

int main(void)
{
	char st[80];
	int n;
	int sum;
	int count;
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		sum = 0;
		count = 1;;
		scanf_s("%s", st, sizeof(st));                    //¾¯ÆÞ
		for (int j = 0; j < strlen(st); j++)
		{
			if (st[j] == 'O')
			{
				sum += count;
				count++;
			}
			if (st[j] == 'X')
			{
				count = 1;
			}
			
		}
		printf("%d\n", sum);
	}

}