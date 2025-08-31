#include <stdio.h>

int power(int, int);

int main(void)
{
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d", power(n, p));
    return 0;
}

int power(int n, int p)
{
    int res = 1;
    while(p){
        res*=n;
        p--;
    }
    return res;
}