#include <stdio.h>

void print_simple(int);

int is_simple(int);

int main(void)
{
    int n;
    scanf("%d", &n);
    print_simple(n);
    return 0;
}

int is_simple(int n)
{
    for(int i = 2; i<n/2;++i){
        if(n/i==0)
            return 0;
    }
    return 1;
}

void print_simple(int n)
{
    int dig;
    for(int i = 2; i<=n; ++i)
    {
        if (n%i==0)
        {
            if(is_simple(i))
                printf("%d ", i);
            n/=i;
            i--;
        }
    }
}

