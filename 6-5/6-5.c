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

	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);

	return 0;
}