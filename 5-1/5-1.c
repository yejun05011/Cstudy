#include <stdio.h>

int main(void) {
	int a = 20;
	int b = 0;

	if (a > 10) {
		b = a;	// ������ ���������� b = 20
	}

	printf("a : %d, b : %d\n", a, b);

	return 0;
}