#include <stdio.h>

int* sum(int a, int b);

int main(void) {
	int* resp;

	resp = sum(10, 20);	// *resp = res�� �ּ�;
	printf("�� ������ �� : %d\n", *resp);

	return 0;
}

int* sum(int a, int b) {	//int a = 10, int b = 20;
	static int res;

	res = a + b;	// res = 30;

	return &res;	//res = 30�� "�ּ�"�� return;
}