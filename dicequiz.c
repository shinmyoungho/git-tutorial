#include<stdio.h>

int main(void)
{
	// ������ 10000 + ���´�x1000
	// �ΰ��� ������ 1000 + ���´�x100
	// ������ �ٸ���� ���� ���� �ִ밪 x 100
	int dice1, dice2, dice3;
	int money;
	scanf_s("%d %d %d", &dice1, &dice2, &dice3);
	if (dice1 == dice2 && dice2 == dice3 && dice1 == dice3) {
		money = 10000 + (dice1 * 1000);
		printf("%d", money);
	}
	else if (dice1 != dice2 && dice2 != dice3 && dice1 != dice3) {
		int max = (dice1 > dice2) ? dice1 : dice2;
		max = (max > dice3) ? max : dice3;
		int money = max * 100;
		printf("%d",money);
	}
	else {
		if (dice1 == dice2) {
			int money = 1000 + dice1 * 100;
			printf("%d", money);
		}
		else if (dice2 == dice3) {
			int money = 1000 + dice2 * 100;
			printf("%d", money);
		}
		else if (dice1 == dice3) {
			int money = 1000 + dice1 * 100;
			printf("%d", money);
		}
	}
	return 0;
}