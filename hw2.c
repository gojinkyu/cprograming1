#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double num, result;
	printf("km�� �Է�: ");
	scanf("%lf", &num);

	result = 0.621371 * num;
	printf("%.1f\n", result);

	return 0;
}