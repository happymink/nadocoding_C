/*
�̸� : �̹α�
�й� : 20174176
�ҽ��ڵ�: P4.cpp
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 2; i <= num; i = i + 2) {
		printf("%d ", i);
	}
	return 0;
}