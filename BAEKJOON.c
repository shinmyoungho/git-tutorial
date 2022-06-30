#include<stdio.h>

int main(void)
{
	int grade[20];
	double new_grade[20];
	int n;
	double sum = 0.0;
	
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &grade[i]);
	}
	int max = grade[0];
	for (int i = 1; i < n; i++)
	{
		if (max < grade[i])
		{
			max = grade[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		new_grade[i] = (double)grade[i] / max * 100;
	}
	for (int i = 0; i < n; i++)
	{
		sum = sum + new_grade[i];
	}
	printf("%lf", sum / n);
	return 0;

}