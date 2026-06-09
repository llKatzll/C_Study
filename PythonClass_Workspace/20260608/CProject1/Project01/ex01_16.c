#include<stdio.h>

int  main()
{
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3; // -128~127

	printf("정수 245를 실수로:%lf\n", num1);
	// 정수 245를 실수로:245.000000
	printf("실수 3.1415를 정수로:%d\n", num2); // 3
	printf("정수 변수 num3 값:%d\n", num3);
	// 정수 변수 num3 값:129
	printf("문자 변수 ch값:%d\n", ch);
	// 문자 변수 ch값:-127

	return 0;

	
}