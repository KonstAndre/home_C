#include <stdio.h>

void is_even_sum(int);

int main(void)
{
    int a;
    scanf("%d", &a);
    is_even_sum(a);
    return 0;
}

void is_even_sum(int a)
{
    int sum = 0;
    while(a)
    {
        sum+=a%10;
        a/=10;
    }
    printf(sum%2==0?"YES":"NO");
}