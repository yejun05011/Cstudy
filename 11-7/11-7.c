#include <stdio.h>

int main(void) {
    int num;
    int grade;
    char name[50];  // �̸� ���̸� �˳��� ����

    printf("�̸� �Է� : ");
    scanf(" %[^\n]", name); // ���� ���� ���ڿ� �Է� �ޱ�

    printf("�й� �Է� : ");
    scanf("%d", &num);

    getchar(); // ���ۿ� ���� �ִ� ���� ���� ����

    printf("���� �Է� : ");
    grade = getchar(); // ������ �� ���ڷ� �Է¹���

    printf("�̸� : %s\n�й� : %d\n���� : %c", name, num, grade);

    return 0;
}