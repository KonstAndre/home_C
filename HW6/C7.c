#include <stdio.h>
#include <math.h>

int dec_P(int, int);

int main(void)
{
    int N, P;
    scanf("%d %d", &N, &P);
    printf("%d", dec_P(N, P));
    return 0;
}

int dec_P(int N, int P)
{
    int new_dig, cel = 0, deg = 0, res=0;
    while(N)
    {
        new_dig =N%P;
        res += pow(10, deg)*new_dig;
        N/=P;
        deg+=1;
    }
    return res;
}