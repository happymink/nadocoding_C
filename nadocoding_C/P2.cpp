/*
�̸� : �̹α�
�й� : 20174176
�ҽ��ڵ�: P2.cpp
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