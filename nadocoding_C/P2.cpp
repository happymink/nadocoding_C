/*
이름 : 이민균
학번 : 20174176
소스코드: P2.cpp
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2;

	scanf("%d", &num1);
	scanf("%d", &num2);

	printf("%d / %d = %d...%d", num1, num2, (num1 / num2), (num1 % num2) );
	return 0;
}