/*
�̸� : �̹α�
�й� : 20174176
�ҽ��ڵ�: P6.cpp
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14
double round_circle(double radius) // ���� �ѷ�
{
	return (2 * PI * radius);
}

double area_circle(double radius) // ���� ����
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