#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int result1,result2,result3;
	int num1, num2;

	printf("����1: ");
	scanf("%d", &num1);
	printf("����2: ");
	scanf("%d", &num2);

	result1 = num1 & num2;
	result2 = num1 | num2;
	result3 = num1 ^ num2;

	printf("%d�� %d�� AND�� ���� %d�Դϴ�.\n",num1,num2,result1);
	printf("%d�� %d�� OR�� ���� %d�Դϴ�.\n",num1, num2, result2);
	printf("%d�� %d�� XOR�� ���� %d�Դϴ�.\n", num1, num2, result3);
}