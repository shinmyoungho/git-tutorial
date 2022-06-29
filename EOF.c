#include <stdio.h>

int main(void) {
	int a, b;
	while (scanf_s("%d %d",&a,&b) != EOF) {  // scanf함수는 EOF를 발생시키기 위해서 'ctrl + z' 키와 엔터키를 3번 입력
		printf("%d\n", a + b);               // 해야한다.
	}                                        // 실수로 'ctrl + c'키를 눌렀는데 바로 종료됨 ????
	return 0;
}