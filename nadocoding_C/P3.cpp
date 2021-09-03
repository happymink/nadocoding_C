/*
이름 : 이민균
학번 : 20174176
소스코드: P3.cpp
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count_odd = 0, count_even = 0 , num;
	while (true) {
		scanf("%d", &num);
		if (num == 0) {
			break;
		}
		if (num % 2 == 0) {
			count_even++;
		}
		else count_odd++;
		
	}

	printf("odd : %d \neven : %d", count_odd, count_even);
	return 0;
}