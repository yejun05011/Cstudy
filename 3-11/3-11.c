#include <stdio.h>

int main(void) {
	char grade;
	char name[20];

	printf("���� �Է� : ");
	scanf("%c", &grade);
	printf("�̸� �Է� : ");
	scanf("%s", name);	// �迭�� �տ� &�� ������� �ʴ´�.
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);

	return 0;
}