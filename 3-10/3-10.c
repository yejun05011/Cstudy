#include <stdio.h>

int main(void) {
	int age;
	double height;

	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);
	printf("Ű�� �Է��ϼ��� : ");
	scanf("%lf", &height);

	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);

	return 0;
}