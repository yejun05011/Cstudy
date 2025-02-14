#include <stdio.h>

int main(void) {
	char small;
	char cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z')) {
		small = cap + ('b' - 'B');
	}

	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c %c", small);

	return 0;
}