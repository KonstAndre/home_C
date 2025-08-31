#include <stdio.h>

int sum_N(int);

int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%d", sum_N(x));
    return 0;
}

int sum_N(int num)
{   
    if(num)
        return num+sum_N(num-1);
    else
        return 0;
}