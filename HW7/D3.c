#include <stdio.h>

void pr(int);

int main(void)
{
    int num;
    scanf("%d", &num);
    if(num == 0)
        printf("%d", 0);
    else
        pr(num);
    return 0;
}

void pr(int num)
{
    
    if(num){
        printf("%d ", num%10);
        pr(num/10);
    }
}