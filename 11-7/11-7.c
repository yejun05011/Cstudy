#include <stdio.h>

int main(void) {
    int num;
    int grade;
    char name[50];  // 이름 길이를 넉넉히 설정

    printf("이름 입력 : ");
    scanf(" %[^\n]", name); // 공백 포함 문자열 입력 받기

    printf("학번 입력 : ");
    scanf("%d", &num);

    getchar(); // 버퍼에 남아 있는 개행 문자 제거

    printf("학점 입력 : ");
    grade = getchar(); // 학점을 한 문자로 입력받음

    printf("이름 : %s\n학번 : %d\n학점 : %c", name, num, grade);

    return 0;
}