#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 15;
	int total;

	double avg;

	int* pa;
	int* pb;
	int* pt = &total;	// ������ ����� �ʱ�ȭ
	double* pg = &avg;	// double�� ������ ����� �ʱ�ȭ

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);

	return 0;
}