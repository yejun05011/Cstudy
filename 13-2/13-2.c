#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 20;

	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);

	{
		int temp = a;
		a = b;
		b = temp;
	}

	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);

	return 0;
}