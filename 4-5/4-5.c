#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 20;
	int c = 10;
	int res;	// 결괏값을 저장할 변수

	res = (a > b);
	printf("a > b : %d\n", res);

	res = (a >= b);
	printf("a >= b : %d\n", res);

	res = (a < b);
	printf("a < b : %d\n", res);

	res = (a <= b);
	printf("a <= b : %d\n", res);

	res = (a <= c);
	printf("a <= c : %d\n", res);

	res = (a == b);
	printf("a == b : %d\n", res);

	res = (a != c);
	printf("a != c : %d\n", res);

	return 0;
}