#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 


int even_num(); 
int odd_num(); 

int even_num(int n)                
{
    if (n % 2 == 0)                 
        printf("%d ", n);        
    return 0;
}

int odd_num(int n)                 
{
    if (n % 2 == 1)                
        printf("%d ", n);        
    return 0;
}


int main()                    
{
    int i;                    
    int n[5] = { 0 };            

    printf("5���� �������Է����ּ���: ");      

    for (i = 0; i < 5; i++)            
    {
        scanf("%d", &n[i]);             
    }

    printf("¦��:");                   
    for (i = 0; i < 5; i++)                
    {
        even_num(n[i]);                  
    }

    printf("Ȧ��:");
    for (i = 0; i < 5; i++)
    {
        odd_num(n[i]);                    
    }


}