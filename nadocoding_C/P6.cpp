/*
이름 : 이민균
학번 : 20174176
소스코드: P6.cpp
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14
double round_circle(double radius) // 원의 둘레
{
	return (2 * PI * radius);
}

double area_circle(double radius) // 원의 넓이
{
	return (PI * radius * radius);
}

int main()
{
	double num;
	scanf("%lf", &num);

	printf("l = %.2f\n", round_circle(num));
	printf("s = %.2f", area_circle(num));
	return 0;
}