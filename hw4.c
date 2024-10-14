#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	int a,b,c,d=0;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &a);

	for (b = 1; b <= a; b++) {
		for (c = 1; c <= b; c++) {
			if (d > 2) {
				printf("It is not a prime number.");
			}
			if (b % c == 0) {
				d += 1;
			}
		}
		if (d == 2) {
			printf("It is a prime number.");
		}
		d = 0;
	}


	return 0;
}
