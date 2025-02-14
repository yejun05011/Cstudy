#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 20;
	int sum = a + b;
	int sub = a - b;
	int mul = a * b;
	int inv = -a;

	printf("aÀÇ °ª : %d, bÀÇ °ª : %d\n", a, b);
	printf("µ¡¼À : %d\n", sum);
	printf("»¬¼À : %d\n", sub);
	printf("°ö¼À : %d\n", mul);
	printf("aÀÇ À½¼ö ¿¬»ê : %d\n", inv);

	return 0;
}