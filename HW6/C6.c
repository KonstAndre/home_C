#include <stdio.h>

unsigned long long geom_seq(int);

int main(void)
{
    int N;
    scanf("%d", &N);
    printf("%llu", geom_seq(N));
    return 0;
}

unsigned long long geom_seq(int N)
{   
    unsigned long long int q = 1;
    while(--N)
    {   
        q*=2;
    }
    return q;
}