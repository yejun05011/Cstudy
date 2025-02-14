#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 20;
	int res;

	res = (++a, ++b);	// 왼쪽부터 오른쪽으로 차례로 연산을 수행하며, res에 저장되는 최종값은 증가된 b의 값이다.

	printf("a : %d, b : %d\n", a, b);
	printf("res : %d\n", res);

	return 0;
}