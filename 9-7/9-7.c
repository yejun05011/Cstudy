#include <stdio.h>

void swap(int* pa, int* pb);	// �� ������ ���� �ٲٴ� �Լ��� ����

int main(void) {
	int a = 10;
	int b = 20;

	swap(&a, &b);	// a, b�� �ּҸ� �μ��� �ְ� �Լ� ȣ��
	printf("a : %d, b : %d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb) { // �Ű������� ������ ����
	int temp;	// ��ȯ�� ���� �ӽ� ����

	temp = *pa;	// temp = 10
	*pa = *pb;	// a = 20
	*pb = temp;	// b = 10
}