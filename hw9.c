#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int convCase(int ch)
{
    const int diff = 'a' - 'A';  
    if (ch >= 'A' && ch <= 'Z')  
        return ch + diff;
    else if (ch >= 'a' && ch <= 'z')  
        return ch - diff;
    else
        return ch;  
}

int main(void)
{
    char str[100];  
    printf("���ڿ� �Է�: ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = convCase(str[i]);  
    }

    printf("��ȯ�� ���ڿ�: %s", str);  
    return 0;
}