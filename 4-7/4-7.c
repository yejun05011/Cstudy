#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 20;
	int res;

	a + b;	// ������ ���� ���
	printf("%d + %d = %d\n", a, b, a + b);	// ���� ����� �ٷ� ��¿� ���

	res = a + b;	// ���� ����� ������ ����
	printf("%d + %d = %d\n", a, b, res);	// ����� ���� ��� ���

	return 0;
}