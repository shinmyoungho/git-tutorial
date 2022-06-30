#include<stdio.h>

int main(void)
{
	int a[10], b[10];
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);               //배열안에 다른 숫자의 갯수를 구하려면 첫번째요소를 비교하면서
		b[i] = a[i] % 42;				   //중복되는 값이 있으면 카운트를 하지않고 지나가면 된다.
	}									   //이게 생각이 안나서 찾아보고 있네 ;; 이게 맞나

	for (int i = 0; i < 10; i++)
	{
		int count = 0;
		for (int j = i + 1; j < 10;j++)
		{
			if (b[i] == b[j])
			{
				count++;
			}
		}
		if (count == 0)
		{
			result++;
		}
	}
	printf("%d", result);
	return 0;
}