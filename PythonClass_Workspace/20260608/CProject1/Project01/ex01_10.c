#include <stdio.h>

int main() {

	/*
	전기 사용량(int amount)을 kw단위로 입력하면 사용요금을 계산해 주는
	프로그램을 작성하시오

	1)int sum
	sum=10

	2)int sum=10

	3)scanf_s("%d",&sum);

	조건)
	1)기본요금:660원
	2)kw당 사용요금:88.5원
	3)전체요금(double price):기본요금+(전기 사용량*kw당 사용요금)
	4)세금(double tax)은 전체요금의 9%
	5)최종 사용요금(double total)=전체요금+세금
	*/

	//비압축버전
	/*
	int _inputAmount;

	int _normalPrice = 660;

	double _kwAmount = 88.5;

	scanf_s("%d", &_inputAmount);

	double _price = _normalPrice + (_inputAmount * _kwAmount);

	double _tax = _price * 0.09;

	double _totalPrice = _price + _tax;

	/*printf("기본요금 : %d\nkw당 사용요금 : %lf\n전체요금 : %lf\n세금 : %lf\n최종 사용 요금 : %lf", _normalPrice, _kwAmount, _price, _tax, _totalPrice);*/

	//압축버전
	int _inputAmount;
	scanf_s("%d", &_inputAmount);
	printf("최종값:%lf", (660 + (_inputAmount * 88.5)) * 1.09);

	return 0;
}