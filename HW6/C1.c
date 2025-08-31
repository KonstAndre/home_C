#include <stdio.h>

int module(int);

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d", module(a));
    return 0;
}

int module(int a)
{
    return a>0?a:-a;
}