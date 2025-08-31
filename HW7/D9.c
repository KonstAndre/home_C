#include <stdio.h>

int sum_digit(int);

int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d", sum_digit(num));
    return 0;
    
}

int sum_digit(int num)
{   
    while(num){
        return num%10+sum_digit(num/10);
    }
}