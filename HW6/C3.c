#include <stdio.h>

int middle(int, int);

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", middle(a, b));
    return 0;
}

int middle(int a, int b)
{
    return (double)(a+b)/2.0;
}