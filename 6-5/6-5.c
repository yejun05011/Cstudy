#include <stdio.h>

int main(void) {
	int sum = 0;
	int i;

	for (
		\i = 1; i < 11; i++) {
		sum += i;
		
		if (sum > 30) {
			break;
		}
	}

	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d\n", i);

	return 0;
}