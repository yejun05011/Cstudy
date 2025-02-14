#include <stdio.h>

int main(void) {
	int score[5];
	int total = 0;
	double avg;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < 5; i++) {
		total += score[i];
	}

	avg = total / 5.0;

	for (int i = 0; i < 5; i++) {
		printf("%5d", score[i]);
	}

	printf("\n");

	printf("ЦђБе : %.1lf\n", avg);

	return 0;
}