#include<stdio.h>

int main(void)
{
	int a[10], b[10];
	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);               //�迭�ȿ� �ٸ� ������ ������ ���Ϸ��� ù��°��Ҹ� ���ϸ鼭
		b[i] = a[i] % 42;				   //�ߺ��Ǵ� ���� ������ ī��Ʈ�� �����ʰ� �������� �ȴ�.
	}									   //�̰� ������ �ȳ��� ã�ƺ��� �ֳ� ;; �̰� �³�

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