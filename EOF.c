#include <stdio.h>

int main(void) {
	int a, b;
	while (scanf_s("%d %d",&a,&b) != EOF) {  // scanf�Լ��� EOF�� �߻���Ű�� ���ؼ� 'ctrl + z' Ű�� ����Ű�� 3�� �Է�
		printf("%d\n", a + b);               // �ؾ��Ѵ�.
	}                                        // �Ǽ��� 'ctrl + c'Ű�� �����µ� �ٷ� ����� ????
	return 0;
}