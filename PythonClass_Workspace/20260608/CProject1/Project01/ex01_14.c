#include <stdio.h>

int main() {

	/*
	Vitamin_C 야구단의 수비수는 등번호 1번부터 9번까지 9명이있다. 등번호와 타율, 
	나이를 각각 입력 받은 후에 한줄에 출력하는 프로그램을 작성하시오
	단, 등번호는 문자,타율은 실수값,나이는 정수값으로 처리한다
	*/

	char num;
	double acc;
	int age;
	printf("등번호 : ");
	scanf_s("%c", &num,1);
	printf("\n타율 : ");
	scanf_s("%lf", &acc);
	printf("\n나이 : ");
	scanf_s("%d", &age);

	printf("등번호 : %c | 타율 : %lf | 나이 : %d", num, acc, age);

	return 0;
}