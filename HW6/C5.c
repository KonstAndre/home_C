#include <stdio.h>

int sum_N(int);

int main(void)
{
    int N;
    scanf("%d", &N);
    printf("%d", sum_N(N));
    return 0;
}

int sum_N(int N)
{
    int sum = 0;
    for(int i = 1;i<=N;i++)
    {
        sum+=i;
    }
    return sum;
}