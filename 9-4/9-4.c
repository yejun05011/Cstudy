#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 20;
	const int* pa = &a;

	printf("���� a �� : %d\n", *pa);
	pa = &b;
	printf("���� b �� : %d\n", *pa);
	pa = &a;
	a = 30;
	printf("���� a �� : %d\n", *pa);

	return 0;
}