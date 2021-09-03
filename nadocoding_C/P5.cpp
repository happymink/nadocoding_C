/*
이름 : 이민균
학번 : 20174176
소스코드: P5.cpp
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int func(int num1, int num2) {
	
	if (num2 > num1) {
		return ((num2 * num2) - (num1 * num1));
	}else return ((num1 * num1) - (num2 * num2));
}

int main()
{
	int input1, input2;
	scanf("%d", &input1);
	scanf("%d", &input2);
	printf("%d", func(input1, input2));
	return 0;
}