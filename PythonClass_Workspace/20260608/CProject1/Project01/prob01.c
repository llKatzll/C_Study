#include <stdio.h>

int main() {

	/*char c;  //A~Z 순환문제.
	int shift;
	scanf_s("%c %d", &c, 1, &shift);

	char result = (c - 'A' + shift) % 26 + 'A';
	printf("%c\n", result);

	return 0;*/



	//정수 하나를 입력받아서, 그 수의 약수를 전부 출력하고, 약수가 2개면 소수라고 판정하기
	/*입력: 7
	출력 :
	약수 : 1 7
	소수입니다

	입력 : 12
	출력 :
	약수 : 1 2 3 4 6 12
	소수가 아닙니다*/

	/*int num;
	int count = 0;

	scanf_s("%d", &num);

	printf("\n약수 : ");

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			count++;
			printf("%d ", i);
		}
	}

	if (count == 2) {
		printf("\n소수입니다");
	}
	else {
		printf("\n소수가 아닙니다");
	}*/


	//%x로 자동 변환 하지 말고, 16진수 한 자리 문자를 하나씩 %c로 받아서 직접 계산. (자릿수는 3자리로 고정해도 됨)
	//(고정하지 않을 경우, 제어문이 필요할 것.)
	
	//입력: 1 A 3   (한 글자씩)
	//출력: 419

	/*char amount;

	int result = 0;
	
	while (scanf_s("%c", &amount, 1) == 1) {
		if (amount == '\n') break;

		if (amount >= '0' && amount <= '9') {
			amount = amount - '0';
		}
		else if (amount >= 'A' && amount <= 'F') {
			amount = amount - 'A' +10;
		}
		else if (amount >= 'a' && amount <= 'f') {
			amount = amount - 'a' + 10;
		}

		result = result * 16 + amount;
	}
	
	printf("%d", result);*/



	//단(2~9)을 입력받아 구구단을 출력하되, 결과값이 짝수면 [짝], 홀수면 [홀] 을 뒤에 붙이기.

	/*입력: 3
	출력 :
	3 x 1 = 3[홀]
	3 x 2 = 6[짝]
	3 x 3 = 9[홀]
	3 x 4 = 12[짝]
	...
	3 x 9 = 27[홀]*/

	/*int input;

	scanf_s("%d", &input);

	for (int i = 1; i <= 9; i++) {
		printf("\n%d x %d = %d", input, i, input * i);

		if ((input * i) % 2 == 0) {
			printf(" [짝]");
		}
		else {
			printf(" [홀]");
		}
	}*/

	// 6세 이하의 어린이와 70세 이상의 어른들은 무료 입장
	// 그 외에는 3,000원의 입장료를 받는다

	/*int age;

	printf("나이가?\n");
	scanf_s("%d", &age);

	if (age <= 6 || age >= 70) {
		printf("공짜로 들어가십쇼");
	}
	else {
		printf("3000원~");
	};*/

	
	//bmi 구하기
	// BMI는 체중을 키의 제곱으로 나눈다(단위 체중은 kg,키는 m)
	// BMI 20미만:저체중,20~24.9:표준,25이상:과체중
	
	//int kg;
	//double height_cm, m, BMI;

	//printf("몸무게(kg) 입력 : ");
	//scanf_s("%d", &kg);
	//printf("키(cm) 입력 : ");
	//scanf_s("%lf", &height_cm);

	//m = height_cm / 100; // cm -> m 변환
	//BMI = kg / (m * m);

	//printf("BMI : %.1lf\n", BMI);

	//if (BMI < 20) printf("저체중");
	//else if (BMI < 25) printf("표준");
	//else printf("과체중");
	
	/*int A = 10;

	switch (A) {
	case 10:
		printf("안녕");
	case 11:
		printf("잘가");
	default:
		printf("반가워");
	}*/
		
	//학점 계산기 구현, 하지만, if문 사용 금지. Switch문만을 사용할 것.
	//입력: 95   →   A
	//입력: 82   →   B
	//입력 : 77   →   C
	//입력 : 55   →   F

	int score;

	scanf_s("%d", &score);

	score = score / 10;

	switch (score) {
	case 10:
	case 9:
		printf("\nA");
		break;
	case 8:
		printf("\nB");
		break;
	case 7:
	case 6:
		printf("\nC");
		break;
	default:
		printf("\nF");
		break;
	}


	return 0;
}