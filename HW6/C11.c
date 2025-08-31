#include <stdio.h>

int nod(int, int);

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", nod(a, b));
    return 0;
}

int nod(int a, int b)
{
    int nod, ost;
    while(ost!=0)
    {
        if(a>b)
        {
            ost = a%b;
            if(ost==0)
                return nod;
            a = b;
            b = ost;
            nod = ost;
        } else 
        {
            ost = b%a;
            if(ost==0)
                return nod;
            b = a;
            a = ost;
            nod = ost;
        }
    }
}