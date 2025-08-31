#include <stdio.h>

int func(int);

int main(void)
{   
    int d;
    scanf("%d", &d);
    int max = func(d);
    while(scanf("%d", &d)==1&&d!=0)
    {
        max = func(d)>max?func(d):max;
    }
    printf("%d", max);
    return 0;
}

int func(int x)
{
    return x<-2?4:((x>=2)?x*x+4*x+5:x*x);
}