#include <stdio.h>

int main(void) {
	int score[5];
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[1]);

	for (int i = 0; i < count; i++) {
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < count; i++) {
		total += score[i];
	}

	avg = total / (double)count;

	for (int i = 0; i < count; i++) {
		printf("%5d", score[i]);
	}

	printf("\n");

	printf("ЦђБе : %.1lf\n", avg);

	return 0;
}