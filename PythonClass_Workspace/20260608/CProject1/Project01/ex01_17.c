#include <stdio.h>
int main() {
	/*
	역사(int history),문화(int letters),예능(int art)
	세 과목의 점수를 입력 받아서
	총점(int tot)과 평균(double average)을 구한 후에
	출력하는 프로그램을 작성하시오
	*/
	/*int history, letters, art;
	int tot;
	double average;

	printf("역사 점수 : ");
	scanf_s("%d", &history);
	printf("문화 점수 : ");
	scanf_s("%d", &letters);
	printf("예능 점수 : ");
	scanf_s("%d", &art);

	tot = history + letters + art;
	average = tot / 3.0;

	printf("총점 : %d\n평균 : %.2lf", tot, average);
	return 0;*/

	int money;
	int w500, w100, w50, w10;

	printf("금액 입력 : ");
	scanf_s("%d", &money);

	w500 = money / 500;     // 500원 개수
	money = money % 500;    // 나머지 갱신

	w100 = money / 100;     // 100원 개수
	money = money % 100;

	w50 = money / 50;       // 50원 개수
	money = money % 50;

	w10 = money / 10;       // 10원 개수
	// money = money % 10;  // 마지막은 보통 생략 (10원 미만 남는 거)

	printf("500원짜리 동전: %d\n", w500);
	printf("100원짜리 동전: %d\n", w100);
	printf("50원짜리 동전: %d\n", w50);
	printf("10원짜리 동전: %d\n", w10);
}