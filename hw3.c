#include <stdio.h>

int main() {
    int num1, num2, num3;
    for (num1 = 0; num1 < 5; num1++) {
        for (num2 = 0; num2 < 5 - num1; num2++) {
            printf(" ");
        }
        for (num3 = 0; num3 < num1 * 2 + 1; num3++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
