#include <stdio.h>

void print_num(int);

int main(void)
{
    int num;
    scanf("%d", &num);
    if(num == 0)
        printf("%d", 0);
    else
        print_num(num);
    return 0;
}

void print_num(int num)
{
    if(num){
            print_num(num/10);
            printf("%d ", num%10);
        }
}