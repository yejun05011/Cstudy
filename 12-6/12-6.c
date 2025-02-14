#include <stdio.h>

int main(void) {
	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);

	// getchar();
	// scanf("%*c");
	fgetc(stdin);

	printf("이름 입력 : ");
	gets(name);
	
	printf("나이 : %d, 이름 : %s\n", age, name);

	return 0;
}