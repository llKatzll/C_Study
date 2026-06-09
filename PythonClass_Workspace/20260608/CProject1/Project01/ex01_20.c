#include<stdio.h>

int main()
{
	char name[30];// 배열 선언(문자 연속)
	char sex; // 문자 1개
	int age;
	double height;

	printf("이름을 입력하세요:");
	scanf_s("%s", name, 30); // hong gil dong(공백을 데이터의 끝으로 간주),hongildong
	printf("성별을 입력하세요:");
	scanf_s(" %c", &sex, 1);
	printf("나이를 입력하세요:");
	scanf_s("%d", &age);
	printf("키를 입력하세요:");
	scanf_s("%lf", &height);

	printf("이름:%s 성별:%c 나이:%d  키:%lf\n", name, sex, age, height);

	return 0;
}