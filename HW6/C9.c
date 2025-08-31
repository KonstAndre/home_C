#include <stdio.h>

int factorial(int);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}

int factorial(int n)
{
    int res = 1;
    for(int i = 1; i<=n; ++i)
    {
        res*=i;
    }
    return res;
}