#include <stdio.h>

int main(void) {
	char small;
	char cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z')) {
		small = cap + ('b' - 'B');
	}

	printf("�빮�� : %c %c", cap, '\n');
	printf("�ҹ��� : %c %c", small);

	return 0;
}