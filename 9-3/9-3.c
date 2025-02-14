#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 15;
	int total;

	double avg;

	int* pa;
	int* pb;
	int* pt = &total;	// 포인터 선언과 초기화
	double* pg = &avg;	// double형 포인터 선언과 초기화

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 합 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	return 0;
}