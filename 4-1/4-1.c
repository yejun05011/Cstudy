#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 20;
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int inv = -a;

	printf("a�� �� : %d, b�� �� : %d\n", a, b);
	printf("���� : %d\n", sum);
	printf("���� : %d\n", sub);
	printf("���� : %d\n", mul);
	printf("a�� ���� ���� : %d\n", inv);

	return 0;
}