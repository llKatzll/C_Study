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
	//추가점수 요소 : case를 5번만 사용한다.
	//입력: 95   →   A
	//입력: 82   →   B
	//입력 : 77   →   C
	//입력 : 55   →   F

	/*int score;

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
	}*/
	//switch의 fall through 기믹, 100점으로 case 10 조건을 충족했을때 break가 없으므로 밑으로 내려가 case 9의 A등급을 받아내는 아주 멋진 테크닉.
	//switch문 case에는 정수만 넣어야한다. 실수를 넣으면 에러가 난다.
	//switch문 case에는 연산자를 넣을 수 없다.

	//변 3개 길이를 입력받아 어떤 삼각형인지 판정한다.
	//세 변으로 삼각형이 안 되면(아무 두 변의 합 ≤ 나머지 변) → "삼각형 아님" 출력
	//세 변 같으면 정삼각형 / 두 변만 같으면 이등변 / 다 다르면 부등변 출력

	//입력: 3 3 3   →   정삼각형
	//입력: 3 3 5   →   이등변삼각형
	//입력 : 3 4 5   →   부등변삼각형
	//입력 : 1 2 9   →   삼각형 아님

	/*int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);

	if (a + b > c && b + c > a && a + c > b) {

		if (a == b && b == c) printf("정삼각형");

		else if (a == b || b == c || a == c) printf("이등변삼각형");

		else printf("부등변삼각형");
	}
	else {
		printf("삼각형 아님");
	};*/

	/*char sel;

	printf("M 오전 A 오후 E 저녁\n");
	printf("해당하는 영문을 입력하세요 : ");
	scanf_s("%c", &sel, 1);

	switch (sel) {
	case 'M':
	case 'm':
		printf("Morning\n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon\n");
		break;
	case 'E':
	case 'e':
		printf("Evening\n");
		break;
	default:
		printf("잘못된 입력\n");
		break;
	}*/

	//출금액(정수)을 받아서 5만/1만/5천/1천 권으로 최소 장수 분배. 단 출금액이 1000으로 안 나누어떨어지면 "1000원 단위로만" 출력.
	
	//입력: 87000
	
	//출력:
	//5만원 : 1장
	//1만원 : 3장
	//5천원 : 1장
	//1천원 : 2장
	
	//입력 : 87500   →   1000원 단위로만 가능

	int money;

	int oman = 0;
	int man = 0;
	int five = 0;
	int one = 0;

	scanf_s("%d", &money);

	if (money % 1000 != 0) {
		printf("1000원 단위로만 가능");
	}
	else {
		oman = money / 50000;
		money = money % 50000;

		man = money / 10000;
		money = money % 10000;

		five = money / 5000;
		money = money % 5000;

		one = money / 1000;
		money = money % 1000;

		printf("5만원 : %d장\n1만원 : %d장\n5천원 : %d장\n1천원 : %d장", oman, man, five, one);
	}

	return 0;
}