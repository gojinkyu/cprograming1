#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binary(int n)
{
	if (n == 0 || n == 1)
		printf("%d ", n);

	else {
		binary(n / 2);
		printf("%d ", n % 2);
	}
}

int main(void)
{
	int num;
	printf("정수입력: ");
	scanf("%d", &num);

	binary(num);
}