#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<math.h>

float calculateSD(float data[]);

int main() 
{
    int i;
    float data[5];
    printf("5개 실수 입력: ");
    for (i = 0; i < 5; ++i)
        scanf("%f", &data[i]);
    printf("\n표준 편차 = %.6f", calculateSD(data));
    return 0;
}

float calculateSD(float data[]) 
{
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 5; ++i) {
        sum += data[i];
    }
    mean = sum / 5;
    for (i = 0; i < 5; ++i)
        SD += pow(data[i] - mean, 2);
    return sqrt(SD / 5);
}
