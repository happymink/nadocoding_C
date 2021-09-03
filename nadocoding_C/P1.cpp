/*
ÀÌ¸§ : ÀÌ¹Î±Õ
ÇÐ¹ø : 20174176
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3;
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);

	printf("sum = %d\n",(num1+num2+num3));
	printf("avg = %d", (num1 + num2 + num3)/3);

	return 0;
}