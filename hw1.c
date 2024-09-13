#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int result1,result2,result3;
	int num1, num2;

	printf("정수1: ");
	scanf("%d", &num1);
	printf("정수2: ");
	scanf("%d", &num2);

	result1 = num1 & num2;
	result2 = num1 | num2;
	result3 = num1 ^ num2;

	printf("%d와 %d를 AND한 값은 %d입니다.\n",num1,num2,result1);
	printf("%d와 %d를 OR한 값은 %d입니다.\n",num1, num2, result2);
	printf("%d와 %d를 XOR한 값은 %d입니다.\n", num1, num2, result3);
}