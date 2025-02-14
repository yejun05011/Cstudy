#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));

	if (pi == NULL) {							// 동적 할당에 실패하면 NULL 포인터 반환
		printf("# 메모리가 부족합니다.\n");		// 예외 상황 메시지 출력
		exit(1);								// 프로그램 종료
	}

	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %.1lf\n", *pd);

	free(pi);
	free(pd);

	return 0;
}